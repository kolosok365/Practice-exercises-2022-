#include "Training_10.h"

//--------------------------------------------------------------------------------------------------------------
float sum(float* mas, int k) {

	for (int i = 1; i < k; i++) {
		mas[0] += mas[i];
	}
	return mas[0];
}

void f10_1() {
	int kol = 0;
	std::cout << "\n¬ведите количество элементов в массиве: ";
	std::cin >> kol;
	float* m = new float[kol];

	for (int i = 0; i < kol; i++) {
		std::cout << "¬ведите значение " << i + 1 << "-го элемента: ";
		std::cin >> m[i];
	}

	std::cout << "\n—реднее арифметическое = " << sum(m, kol) << "\n";
	delete[] m;
}
//--------------------------------------------------------------------------------------------------------------
void f10_2(char* s) {
	char* placestart = s;
	int k = strlen(s);

	while (*s) {
		if (*s != ' ')
			*s = toupper(*s);
		s++;
	}

	s = placestart;

}
//--------------------------------------------------------------------------------------------------------------
void sort(char** m, int kol) {

	char* v = NULL;
	/*std::cout<<m[1];
	std::cout<<m[2];
	std::cout<<*m[1];
	std::cout<<*m[2];*/
	for (int i = 0; i < kol - 1; i++) {
		for (int j = 1; j < kol; j++) {
			if (*m[j] < *m[i]) {
				v = m[i];
				m[i] = m[j];
				m[j] = v;
			}
		}
	}
}

void f10_3() {
	int kol = 0;
	char ans = 'д';
	char** m = new char* [7];
	//std::cout << m << "\n";
	////std::cout << *m << "\n";
	//std::cout << **m << "\n";

	while (ans == 'д') {
		std::cout << "¬ведите " << kol + 1 << "-ую строку: ";
		*(m + kol) = new char[10];
		std::cin >> m[kol++];
		std::cin.ignore(MAXINT, '\n');
		//std::cin.getline(*(m+kol++),60); тоже работает
		std::cout << "¬водим ещЄ?(д/н)";
		ans = std::getchar();
	}

	sort(m, kol);

	std::cout << "\nќтсортированный массив указателей\n";

	for (int i = 0; i < kol; i++)
		std::cout << m[i]/* *(m+i) */ << "\n";//тоже работает

	for (int i = 0; i < kol; i++)
		delete[] m[i];

	delete[] m;
}
//--------------------------------------------------------------------------------------------------------------
void LinkList::Add(int d) {
	Link* newlink = new Link;
	newlink->Date = d;

	if (first)
		first->Next = newlink;
	else
		start = newlink;

	//newlink->Next = first;
	first = newlink;

	//first = newlink;
	//newlink->Previos = first;
}

void LinkList::Show() {
	/*Link* current = first;

	while (current) {
		std::cout << current->Date << "\n";
		current = current->Next;
	}*/

	Link* current = start;

	while (current) {
		std::cout << current->Date << "\n";
		current = current->Next;
	}
}

LinkList::~LinkList() {

	//Link* current = NULL;
	Link* current = start;

	while (/*first*/current) {
		//current = first;
		start = current;
		std::cout << "\n”даление элемента " << current->Date << "\n";
		//first = current->Next;
		current = current->Next;
		//delete current;
		delete start;
	}
}

void f10_4() {
	LinkList linklist;
	linklist.Add(10);
	linklist.Add(20);
	linklist.Add(30);
	linklist.Add(40);

	linklist.Show();

}
//--------------------------------------------------------------------------------------------------------------
void Addarrays(float* f1, float* f2, float* f3, int k = 5) {

	std::cout << "—уммированный массив:";

	for (int i = 0; i < k; i++) {
		f3[i] = f1[i] + f2[i];
		std::cout << " " << f3[i];
	}
}

void f10_5() {
	float* m1 = new float[5]{ 2.3, 4.5, 3, 5.5 };
	float* m2 = new float[5]{ 1.4, 5.6, 7.2, 4, 16 };
	float* m3 = new float[5];

	Addarrays(m1, m2, m3);

	delete[] m1;
	delete[] m2;
	delete[] m3;
}
//--------------------------------------------------------------------------------------------------------------
int Compstr(char* s1, char* s2) {
	if (*s1 < *s2) {
		return -1;
	}
	else if (*s1 == *s2) {
		return 0;
	}
	else
		return 1;
}

void f10_6() {

	char* ps1 = new char;
	std::cout << "¬ведите 1-ую строку: ";
	std::cin.ignore(MAXINT, '\n');
	std::cin.getline(ps1, 60);

	char* ps2 = new char;
	std::cout << "¬ведите 2-ую строку: ";
	std::cin >> ps2;

	int rez = Compstr(ps1, ps2);
	std::cout << "\n–езультат = " << rez;
	delete ps1;
	delete ps2;
}
//--------------------------------------------------------------------------------------------------------------

void F10() {
	std::cout << "¬ведите є упражнени€ 10 главы: ";
	std::cin >> Num;

	switch (Num)
	{
	case 1: {
		f10_1();
		break;
	}

	case 2: {
		std::cout << "¬ведите строку: ";
		char* s = new char[30];
		std::cin.ignore(MAXINT, '\n');
		std::cin.getline(s, 60);
		f10_2(s);
		std::cout << "\n" << s;
		delete[] s;
		break;
	}

	case 3: {
		f10_3();
		break;
	}

	case 4: {
		f10_4();
		break;
	}

	case 5: {
		f10_5();
		break;
	}

	case 6: {
		f10_6();
		break;
	}

	default:
		break;
	}

}