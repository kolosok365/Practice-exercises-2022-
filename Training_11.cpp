#include "Training_11.h"

//--------------------------------------------------------------------------------------------------------------
void Publication11::SetData() {
	std::cout << "\nВведите название книги:";
	std::cin.ignore(MAXINT, '\n');
	getline(std::cin, Name);
	std::cout << "Введите стоимость книги:";
	std::cin >> Price;
}
void Publication11::GetData() {
	std::cout << "\nНазвание книги:" << Name << "\nCтоимость книги:" << Price;
}

void Book11::SetData() {
	Publication11::SetData();
	std::cout << "Введите количество страниц книги " << Name << ":";
	std::cin >> Kolstr;
}
void Book11::GetData() {
	Publication11::GetData();
	std::cout << "\nКоличество страниц книги " << Name << ":" << Kolstr << "\n";
}

void Type11::SetData() {
	Publication11::SetData();
	std::cout << "Введите количество минут записи книги " << Name << ":";
	std::cin >> Timezapis;
}
void Type11::GetData() {
	Publication11::GetData();
	std::cout << "\nКоличество минут записи книги " << Name << ":" << Timezapis << "\n";
}

void f11_1() {

	Publication11** m = new Publication11 * [2];
	m[0] = new Book11;
	m[1] = new Type11;

	/*Book11 b;
	Type11 t;*/

	for (int i = 0; i < 2; i++) {
		m[i]->SetData();
	}

	for (int i = 0; i < 2; i++) {
		m[i]->GetData();
	}

	delete (m[0]);
	delete m[1];
	delete[] m;




}
//--------------------------------------------------------------------------------------------------------------
void Distance_11::Show() {
	std::cout << "\n" << feet << " футов " << inches << " дюймов\n";
}
int Distance_11::count = 0;
void f11_3() {

	Distance_11 a(5, 3.7);
	std::cout << &a;
	Distance_11 b(4, 6.7);

	Distance_11 rez = a * b;
	a = a * 10;
	std::cout << &a;

	b = 5.5 * b;
	rez.Show();
	a.Show();
	b.Show();
}
//--------------------------------------------------------------------------------------------------------------
void f11_4() {
	const int ASIZE = 10;
	Array arr(ASIZE);

	for (int j = 0; j < ASIZE; j++) {
		arr[j] = j * j;
		std::cout << arr[j] << " ";
	}
	std::cout << "\n";

	Array arr2(arr);
	Array arr4 = arr;

	for (int j = 0; j < ASIZE; j++) {
		std::cout << arr2[j] << " ";
	}
	std::cout << "\n";

	Array arr3(ASIZE);
	arr3 = arr;

	for (int j = 0; j < ASIZE; j++) {
		std::cout << arr3[j] << arr[j] << " ";
	}
	std::cout << "\n";



}
//--------------------------------------------------------------------------------------------------------------
void Book11::IsOverSize() {
	if (Kolstr > 800)
		std::cout << "\nКнига более 800 страниц!\n";
}

void Type11::IsOverSize() {
	if (Timezapis > 90)
		std::cout << "\nЗапись кассеты более 90 минут!\n";
}

void f11_5() {
	Publication11** m = new Publication11 * [4];
	m[0] = new Book11;
	m[1] = new Book11;
	m[2] = new Type11;
	m[3] = new Type11;

	for (int i = 0; i < 4; i++) {
		m[i]->SetData();
	}

	for (int i = 0; i < 4; i++) {
		m[i]->GetData();
		m[i]->IsOverSize();
	}

	delete m[0];
	delete m[1];
	delete m[2];
	delete m[3];

	delete[] m;
}
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------

void F11() {
	std::cout << "Введите № упражнения 11 главы: ";
	std::cin >> Num;

	switch (Num) {

	case 1: {
		f11_1();
		break;
	}

	case 2: {
		break;
	}

	case 3: {
		f11_3();
		break;
	}

	case 4: {
		f11_4();
		break;
	}

	case 5: {
		f11_5();
		break;
	}
	}
}