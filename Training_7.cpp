#include "Training_7.h"

//--------------------------------------------------------------------------------------------------------------
void Reversit(std::string& s) {
	int len = s.size();
	char temp;

	for (int i = 0; i < len / 2; i++) {
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

void f7_1() {
	std::string str;
	std::cout << "������� ������, ������� ���� �����������\n";
	std::cin.ignore(INT_MAX, '\n');
	std::getline(std::cin, str);
	Reversit(str);
	std::cout << "\n���������:\n" << str;
}
//--------------------------------------------------------------------------------------------------------------
int Employee_7::kol = 0;

void Employee_7::PutData() {
	std::cout << "������� ��� " << ++kol << "-�� ����������:";
	std::cin.ignore(INT_MAX, '\n');
	std::getline(std::cin, Name);
	std::cout << "������� ����� " << kol << "-�� ����������:";
	std::cin >> Number;
}

void Employee_7::GetData() {
	std::cout << "���:" << Name << "   �����:" << Number << "\n";
}

void f7_2() {
	Employee_7 m[100];
	char a = ' ';

	do {
		m[Employee_7::kol].PutData();
		std::cout << "��������� ������� ��� ����������?(�/�)";
		a = _getch();
		std::cout << "\n";
	} while (a == '�');

	for (int i = 0; i < Employee_7::kol; i++)
		m[i].GetData();
}
//--------------------------------------------------------------------------------------------------------------
int Distance_7::count = 0;
Distance_7::Distance_7()
	:feet(0), inches(0)
{

}

void Distance_7::Set() {
	std::cout << "������� " << ++count << "-�� ����������\n����:";
	std::cin >> feet;
	std::cout << "�����:";
	std::cin >> inches;
}

Distance_7 Distance_7::operator+(Distance_7 ob) {
	Distance_7 t;
	t.feet = feet + ob.feet;
	t.inches = inches + ob.inches;
	return t;
}

void Distance_7::Div() {
	float total = inches + feet * 12;
	double sr = total / count;
	feet = (int)(sr / 12);
	inches = (sr - feet * 12);
	std::cout << "������� ����������:" << feet << " ����� " << inches << " ������";
}

void f7_3() {
	Distance_7 m[10], total;
	char a = ' ';

	do {
		m[Distance_7::count].Set();
		std::cout << "\n��������� ������� ����� ����������?\n";
		a = _getch();
	} while (a == 'y');

	for (int i = 0; i < Distance_7::count; i++) {
		total = total + m[i];
	}

	total.Div();
}
//--------------------------------------------------------------------------------------------------------------
int Max(int mass[], int k) {
	int max = mass[0];
	int pos = 0;

	for (int i = 1; i < k; i++) {
		if (mass[i] > max) {
			max = mass[i];
			pos = i;
		}
	}
	return pos;
}

void f7_4() {
	int m[5];
	std::cout << "������� �����\n";

	for (int i = 0; i < 5; i++) {
		std::cin >> m[i];
	}

	int rezult = Max(m, 5);
	std::cout << "\n���������� ������� " << m[rezult] << " � ��� ������ " << rezult;

}
//--------------------------------------------------------------------------------------------------------------
Fract_7::Fract_7()
	:chisl(0), znam(1)
{

}

Fract_7 Fract_7::operator + (Fract_7 ob) {
	Fract_7 rez;
	rez.chisl = (chisl * ob.znam + ob.chisl * znam);
	rez.znam = znam * ob.znam;
	return rez;
}

void f7_5() {
	Fract_7 m[5];
	char ch;
	Fract_7 sum;

	for (int i = 0; i < 3; i++) {
		std::cout << "������� ��������� � ����������� " << i + 1 << "-�� ����� � ������� a/b:";
		std::cin >> m[i].chisl >> ch >> m[i].znam;
		sum = sum + m[i];
	}
	std::cout << "����� = " << sum.chisl << ch << sum.znam;
}
//--------------------------------------------------------------------------------------------------------------
void SafeArr::Put(int ind, int el) {
	if (ind >= 0 && ind < 10)
		m[ind] = el;
	else
		std::cout << "������ ������ ���� �� 0 �� 9";
}
int SafeArr::Get(int ind) {
	if (ind >= 0 && ind < 10)
		return m[ind];
	else {
		std::cout << "������ ������ ���� �� 0 �� 9";
		return -1;
	}

}

SafeArr::SafeArr(int s)
	:size(s)
{
	m = new int[size];
}
SafeArr::~SafeArr()
{
	delete[] m;
}


void f7_8() {
	SafeArr ob(10);
	int i, chisl, rez;
	std::cout << "������� ������ � ��������������� �����:";
	std::cin >> i >> chisl;
	ob.Put(i, chisl);
	std::cout << "������� ������:";
	std::cin >> i;
	rez = ob.Get(i);

	if (rez != -1)
		std::cout << "����� = " << rez;
}
//--------------------------------------------------------------------------------------------------------------
Matrix::Matrix(int h, int w)
	:height(h), width(w)
{
	matr = new int* [h];
	for (int i = 0; i < h; i++)
		matr[i] = new int[w] {0};
}

Matrix::~Matrix() {

	for (int i = 0; i < height; i++)
		delete[] matr[i];
	delete[] matr;
}

void Matrix::Put(int m, int n, int el) {
	if ((m >= 0 && m < height) && (n >= 0 && m < width))
		matr[m][n] = el;
	else
		std::cout << "������� ������ ������ ������ ���� ������ " << height << " � " << width;
}

int Matrix::Get(int m, int n) {
	if ((m >= 0 && m < height) && (n >= 0 && m < width))
		return matr[m][n];
	else
		std::cout << "������� ������ ������ ������ ���� ������ " << height << " � " << width;
}

void Matrix::Show() {

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			std::cout << matr[i][j] << " ";
		}
		std::cout << "\n";
	}
}

void f7_10() {
	Matrix m1(3, 4);
	m1.Show();
	int m, n, el, rez;
	std::cout << "������� ������� ������ � �������, ����� �����:";
	std::cin >> m >> n >> el;
	m1.Put(m, n, el);
	m1.Show();
}
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
void F7() {
	std::cout << "�������� � ���������� 7 �����: ";
	std::cin >> Num;

	switch (Num) {
	case 1: {
		f7_1();
		break;
	}
	case 2: {
		f7_2();
		break;
	}

	case 3: {
		f7_3();
		break;
	}

	case 4: {
		f7_4();
		break;
	}

	case 5: {
		f7_5();
		break;
	}

	case 8: {
		f7_8();
		break;
	}

	case 10: {
		f7_10();
		break;
	}

	default: {
		break;
	}
	}
}