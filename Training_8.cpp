#include "Training_8.h"

//--------------------------------------------------------------------------------------------------------------
Distance_8::Distance_8()
	:feet(0), inches(0)
{

}

Distance_8::Distance_8(int f, float inch)
	: feet(f), inches(inch)
{
	while (inches > 12) {
		feet++;
		inches -= 12;
	}
}

void Distance_8::Set() {
	std::cout << "\n¬ведите количество футов и дюймов:";
	std::cin >> feet >> inches;

	while (inches > 12) {
		feet++;
		inches -= 12;
	}
}

Distance_8 Distance_8::operator - (Distance_8 ob2) {
	int f = feet - ob2.feet;
	float i = inches - ob2.inches;

	while (i < 0) {
		f--;
		i += 12;
	}

	Distance_8 r(f, i);
	return r;
}

void Distance_8::Show() {
	std::cout << feet << " футов " << inches << " дюймов";
}

void f8_1() {
	Distance_8 a(14, 18), b, rez;
	b.Set();
	rez = a - b;
	std::cout << "\na = ";
	a.Show();
	std::cout << "\nb = ";
	b.Show();
	std::cout << "\n a - b = ";
	rez.Show();
}
//--------------------------------------------------------------------------------------------------------------

void F8() {
	std::cout << "¬ведите є упражнени€ 8 главы:";
	std::cin >> Num;

	switch (Num)
	{
	case 1:
		f8_1();
		break;

	default:
		break;
	}
}