#pragma once
#include "Library.h"


void F14();
//--------------------------------------------------------------------------------------------------------------
void f14_1();

template <class T, class k>
T Srednee(T* m, k kol) {
	T sum = 0;

	for (k i = 0; i < kol; i++) {
		std::cout << " + " << m[i];
		sum += m[i];
	}

	return sum;
}
//--------------------------------------------------------------------------------------------------------------
void f14_2();

template<class Type>
struct link {
	Type data;
	link* next;

};

template<class Type>class Queue {
	link<Type>* top;
	link<Type>* start;

public:
	class Mistake
	{
	public:
		std::string poysnenie;
		Mistake(std::string p) {
			poysnenie = p;
		}
	};

	int count;
	Queue() {
		top = NULL;
		start = NULL;
		count = 0;
	}
	void Add(Type d);
	void Put();
};
//--------------------------------------------------------------------------------------------------------------
void f14_4();

template<class Type> void SwapArgs(Type& a, Type& b);
//--------------------------------------------------------------------------------------------------------------
void f14_5();
template<class Type> Type Amax(Type* m, int raz);
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------

