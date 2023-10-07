#include "Training_14.h"

void f14_1() {
	int* mi = new int[5]{ 1,2,3,4,5 };
	long* ml = new long[5]{ 1,2,3,4,5 };
	double* md = new double[5]{ 1.1,2.1,3.1,4.1,5.1 };
	char* mc = new char[5]{ '1','2','3','4','5' };
	std::cout << "Средние арифметические\n";

	std::cout << " = " << Srednee(mi, 5) << "\n";
	std::cout << " = " << Srednee(ml, 5) << "\n";
	std::cout << " = " << Srednee(md, 5) << "\n";
	std::cout << " = " << Srednee(mc, 5) << "\n";

	delete[] mi;
	delete[] ml;
	delete[] md;
	delete[] mc;
}
//--------------------------------------------------------------------------------------------------------------
template<class Type>
void Queue<Type>::Add(Type d) {

	link<Type>* newlink = new link<Type>;

	if (count >= 4) {
		throw(Mistake("Очередь заполнена и добавление невозможно!"));
	}

	if (count <= 0) {
		start = newlink;
	}
	else {
		top->next = newlink;
	}
	newlink->data = d;
	top = newlink;
	top->next = NULL;
	count++;
}

template<class Type>
void Queue<Type>::Put() {

	if (start != NULL) {
		std::cout << "Вышел " << start->data << "\n";
		link<Type>* cur = start;
		start = start->next;
		delete cur;
		count--;
	}
	else {
		count = 0;
		throw(Mistake("Очередь пуста!"));
	}

}

void f14_2() {

	try {
		Queue<int> iq;
		iq.Add(3);
		iq.Add(6);
		iq.Add(8);
		iq.Add(11);

		int counter = iq.count;
		for (int i = 0; i < counter; i++)
			iq.Put();

		iq.Add(7);
		iq.Put();
		iq.Put();
	}

	catch (Queue<int>::Mistake m) {//для других типов данных, помимо int, тоже надо писать catch
		std::cout << m.poysnenie;
	}
}
//--------------------------------------------------------------------------------------------------------------
template<class Type>
void SwapArgs(Type& a, Type& b) {
	Type v = a;
	a = b;
	b = v;
}

void f14_4() {
	int ai = 2, bi = 7;
	double ad = 23.8, bd = 44.6;
	char ac = 'н', bc = 'к';

	std::cout << "До перестановки\n";
	std::cout << ai << " " << bi << "\n";
	std::cout << ad << " " << bd << "\n";
	std::cout << ac << " " << bc << "\n\n";

	SwapArgs(ai, bi);
	SwapArgs(ad, bd);
	SwapArgs(ac, bc);

	std::cout << "После перестановки\n";
	std::cout << ai << " " << bi << "\n";
	std::cout << ad << " " << bd << "\n";
	std::cout << ac << " " << bc << "\n\n";
}
//--------------------------------------------------------------------------------------------------------------
template<class Type> Type Amax(Type* m, int raz) {
	Type max = m[0]; //m[0] = *(m + 0)

	for (int i = 1; i < raz; i++) {
		if (m[i] > max)
			max = m[i];
	}
	std::cout << "Максимальный элемент = ";
	return max;
}

void f14_5() {
	int* mi = new int[5]{ 11, 2, 43, 8, 16 };
	double* md = new double[5]{ 12.1, 34.5, 6.0, 56.8, 1.1 };
	std::cout << Amax(mi, 5) << "\n";
	std::cout << Amax(md, 5) << "\n";
}
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
void F14() {
	std::cout << "Введите № упражнения 14 главы: ";
	std::cin >> Num;

	switch (Num)
	{
	case 1: {
		f14_1();
		break;
	}
	case 2: {
		f14_2();
	}
	case 4: {
		f14_4();
		break;
	}
	case 5: {
		f14_5();
		break;
	}
	default:
		break;
	}
}