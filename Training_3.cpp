#include "Training_3.h"

//--------------------------------------------------------------------------------------------------------------
void f3_1() {

	unsigned long n; // �����
	std::cout << "\n������� �����:";
	std::cin >> n; // �������� �����

	for (int i = 1; i <= 200; i++) {

		std::cout << std::setw(7) << n * i;

		if (!(i % 10))
			std::cout << std::endl;
	}
}
//--------------------------------------------------------------------------------------------------------------
void f3_2() {

	std::cout << "������� 1 ��� �������� ����� ������� � ����� ����������,\n"
		"2 ��� �������� ����� ���������� � ����� �������:";

	std::cin >> Num;
	double t;

	if (Num == 1) {
		std::cout << "\n������� ����������� �� �������: ";
		std::cin >> t;
		std::cout << "\n�������� �� ����������: " << (1.8 * t) + 32;

	}
	else if (Num == 2) {
		std::cout << "\n������� ����������� �� ����������: ";
		std::cin >> t;
		std::cout << "\n�������� �� �������: " << 0.555 * (t - 32);

	}
	else
		std::cout << "\n��� ������ ������!";
}
//--------------------------------------------------------------------------------------------------------------
void f3_3() {

	char ch = 'a';
	long total = 0;
	std::cout << "������� �����: ";

	while (ch != '\r') {
		ch = _getche();

		if (ch != '\r')
			total = total * 10 + ch - '0';//����� �� ���� ������� �������� �����, ������� �� ���� 48 ��� '0'
	}
	std::cout << "\n�� ����� �����: " << total;
}
//--------------------------------------------------------------------------------------------------------------
void f3_4() {

	char zn, answer;
	double a, b, rez = 0;

	do {

		std::cout << "������� ������ �������, �������� � ������ �������: ";
		std::cin >> a >> zn >> b;

		switch (zn)
		{
		case '*':
			rez = a * b;
			break;

		case '/':
			rez = a / b;
			break;

		case '+':
			rez = a + b;
			break;

		case '-':
			rez = a - b;
			break;

		default:
			std::cout << "\n������������ ����!\n";
			break;
		}

		if (zn == '*' || zn == '/' || zn == '+' || zn == '-')
			std::cout << "\n��������� �����: " << rez;

		std::cout << "\n��������� ��� ���� �������� (y/n)? ";
		std::cin >> answer;
		std::cout << "\n";

	} while (answer == 'y');
}
//--------------------------------------------------------------------------------------------------------------
void f3_5() {

	std::setiosflags(std::ios::right);
	std::string s = "";
	for (int i = 0; i < 20; i++) {
		s = "";
		for (int j = 1, n = (1 + i * 2); j <= n; j++) {
			s += 'X';
		}
		std::cout << std::setw(50) << s;
		std::cout << "\n";
	}
}
//--------------------------------------------------------------------------------------------------------------
void f3_6() {
	int c, ans;

	do {
		ans = 1;
		std::cout << "������� �����, ��������� �������� ���� �������: ";
		std::cin >> c;

		if (c == 0)
			break;

		for (; c > 0; c--) {
			ans *= c;
		}
		std::cout << "\n�����: " << ans;
		std::cout << "\n";
	} while (true);
}
//--------------------------------------------------------------------------------------------------------------
void f3_7() {

	double vkl = 0;
	int years = 0;
	float proc = 0;
	std::cout << "������� ��������� �����: ";
	std::cin >> vkl;
	std::cout << "\n������� ����� ���: ";
	std::cin >> years;
	std::cout << "\n������� ���������� ������: ";
	std::cin >> proc;

	for (int i = 0; i < years; i++)
		vkl = vkl + (vkl * (proc / 100));
	std::cout << "\n����� " << years;

	if (years % 10 == 1)
		std::cout << " ��� ";
	else if (years % 10 > 1 && years % 10 < 5)
		std::cout << " ���� ";
	else
		std::cout << " ��� ";

	std::cout << "�� �������� " << vkl;

}
//--------------------------------------------------------------------------------------------------------------
void f3_9() {
	int people = 1, places, var;
	std::cout << "������� ���������� ������: ";
	std::cin >> var;
	std::cout << "\n������� ���������� ����: ";
	std::cin >> places;

	for (; var >= places - 1; var--)
		people *= var;

	std::cout << "\n�����: " << people;

}
//--------------------------------------------------------------------------------------------------------------
void f3_10() {

	double vkl = 0, need = 0;
	int years = 0;
	float proc = 0;

	std::cout << "������� ��������� �����: ";
	std::cin >> vkl;

	std::cout << "\n������� ������� ���� ��������: ";
	std::cin >> need;

	std::cout << "\n������� ���������� ������: ";
	std::cin >> proc;

	while (vkl < need) {
		years++;
		vkl = vkl + (vkl * (proc / 100));
	}
	std::cout << "\n����������� " << years;

	if (years % 10 == 1)
		std::cout << " ��� ";
	else if (years % 10 > 1 && years % 10 < 5)
		std::cout << " ���� ";
	else
		std::cout << " ��� ";

	std::cout << "� �� �������� " << vkl;

}
//--------------------------------------------------------------------------------------------------------------
void F3() {

	std::cout << "������� � ��������� 3 �����: ";
	std::cin >> Num;

	switch (Num)
	{
	case 1:
		f3_1();
		break;

	case 2:
		f3_2();
		break;

	case 3:
		f3_3();
		break;

	case 4:
		f3_4();
		break;

	case 5:
		f3_5();
		break;

	case 6:
		f3_6();
		break;

	case 7:
		f3_7();
		break;

	case 9:
		f3_9();
		break;

	case 10:
		f3_10();
		break;

	default:
		break;
	}

}