#include "Training_12.h"
#include "Library.h"
//--------------------------------------------------------------------------------------------------------------
void Distance_12::Set() {
	std::cout << "\n������� ���� � �����: ";
	std::cin >> feet >> inches;
}

void Distance_12::Show() {
	std::cout << "\n" << feet << " ����� � " << inches << " ������";
}

void f12_1() {
	const char* FILENAME = "C:\myfile_12_1";
	Distance_12* m = new Distance_12[5];
	int i = 0;

	while (true) {
		//m[i] = new Distance_12;
		m[i++].Set();
		std::cout << "\n�������� ��� ������?(y/n)";

		if (_getch() != 'y')
			break;
	}

	std::ofstream f(FILENAME, std::ios::binary | std::ios::app | std::ios::out);

	if (f) {
		f.write((char*)m, i * sizeof(m[0]));
		//f.write((char*)*m, i * sizeof(*m[0]));
		std::cout << "\n������ � ���� ������ �������!";
	}
	else {
		std::cout << "\n������ ������ � ����!";
		exit(1);
	}

	f.close();
	delete[] m;
	m = NULL;

	std::ifstream f2(FILENAME, std::ios::binary | std::ios::in);
	f2.seekg(0, std::ios::end);
	int length = f2.tellg();
	int kol = (length / sizeof(Distance_12));
	f2.seekg(0, std::ios::beg);
	Distance_12** m2 = new Distance_12 * [kol];

	if (f2) {

		for (i = 0; i < kol; i++) {
			m2[i] = new Distance_12;
			f2.read((char*)(m2[i]), sizeof(Distance_12));
			m2[i]->Show();
		}

	}
	else {
		std::cout << "\n������ ������ �� �����!";
		exit(1);
	}

	f2.close();
	for (i = 0; i < kol; i++) {
		delete m2[i];
	}

	delete[] m2;

}
//--------------------------------------------------------------------------------------------------------------
void f12_4() {
	setlocale(LC_ALL, "rus");
	std::string Name;
	std::string Surname;
	/*unsigned long*/int Number;
	char razdelitel = ' ';
	char newstr = '\n';
	char ans = ' ';
	const char* filename = "C:\\����� �++\\��������� �++\\Workers.txt";
	std::fstream f(filename,/* std::ios::out |*/ std::ios::app);

	if (!f) {
		std::cerr << "������ �������� ����� ��� ������!";
		exit(1);
	}

	do {
		/*f >> newstr;*/
		f.put(newstr);

		std::cout << "������� ���:";
		std::cin >> Name;
		for (int i = 0; i < Name.size(); i++)
			f.put(Name[i]);
		f.put(razdelitel);
		/*f << Name << razdelitel;*/

		std::cout << "\n������� �������:";
		std::cin >> Surname;
		for (int i = 0; i < Surname.size(); i++)
			f.put(Surname[i]);
		f.put(razdelitel);
		/*f << Surname << razdelitel;*/

		std::cout << "\n������� �����:";
		std::cin >> Number;
		/*f.put(Number);*/
		/*f.put(razdelitel);*/
		f << Number;

		std::cout << "\n��������� ������� ��� ����������?(�/�)\n";
		ans = _getch();

		if (ans == '�')
			break;

	} while (true);

	f.close();
	f.open(filename, std::ios::in /*| std::ios::app*/);
	f.seekg(17, std::ios::beg);

	if (!f) {
		std::cerr << "������ �������� ����� ��� ������!";
		exit(1);
	}

	std::cout << "\n��������� ������ �� �����\n"
		"���       �������   �����";

	char ch;
	int i = 0;
	std::string str;
	int strlong = 0;
	while (!f.eof()) {
		f.get(ch);

		if (ch == ' ') {
			strlong = str.size();
			std::cout << std::setiosflags(std::ios::left) << std::setw(strlong + (10 - strlong)) << str;
			str = " ";
			i++;
		}


		if (i != 2) {
			str += ch;
			//continue;
		}
		else {
			f >> i;
			if (i == ' ') {
				i = 0;
				continue;
			}

			std::cout <</* setiosflags(std::ios::left) << std::setw(10 + strlong + (10 - strlong)) << */ i;
			i = 0;
		}
		/*f >> Name;
		f >> Surname;
		f >> Number;
		std::cout << Name << " " << Surname << " " << Number << "\n";*/
	}

	f.close();
}
//--------------------------------------------------------------------------------------------------------------
void Time_12::Put_Time() {

	while (true) {

		std::cout << "\n������� ����: ";
		std::cin >> hours;

		if (!std::cin.good() || (hours < 0 || hours > 23)) {
			std::cin.clear();
			std::cin.ignore(MAXINT, '\n');
			std::cout << "������������ ����!\n";
			continue;
		}

		std::cout << "\n������� ������: ";
		std::cin >> minuts;

		if (!std::cin.good() || (minuts < 0 || minuts > 59)) {
			std::cin.clear();
			std::cin.ignore(MAXINT, '\n');
			std::cout << "������������ ����!\n";
			continue;
		}

		std::cout << "\n������� �������: ";
		std::cin >> seconds;

		if (!std::cin.good() || (seconds < 0 || seconds > 60)) {
			std::cin.clear();
			std::cin.ignore(MAXINT, '\n');
			std::cout << "������������ ����!\n";
			continue;
		}
		break;
	}
}

void Time_12::Get_Time() {
	std::cout << "����� ";

	if (hours < 10)
		std::cout << 0;

	std::cout << hours << ":";

	if (minuts < 10)
		std::cout << 0;

	std::cout << minuts << ":";

	if (seconds < 10)
		std::cout << 0;

	std::cout << seconds << "\n";
}

void f12_5() {
	int count = 0;
	Time_12** m = new Time_12 * [5];
	char ans = ' ';

	while (true) {
		m[count] = new Time_12;
		m[count++]->Put_Time();
		std::cout << "������ ��� �����?(�/�)";
		ans = _getch();

		if (ans == '�')
			break;

	}

	std::cout << "\n";

	for (int i = 0; i < count; i++) {
		m[i]->Get_Time();
	}
}
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
void F12() {
	std::cout << "������� � ���������� 12 �����: ";
	std::cin >> Num;

	switch (Num)
	{
	case 1: {
		f12_1();
		break;
	}

	case 4: {
		f12_4();
		break;
	}

	case 5: {
		f12_5();
		break;
	}
	default:
		break;
	}
}