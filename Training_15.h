#pragma once

#include "Library.h"
#include <algorithm>
#include <vector>
#include <list>
#include <set>
#include <iterator>
#include <numeric>
#include <functional>
//--------------------------------------------------------------------------------------------------------------
class Person
{
public:
	std::string lastname;
	std::string firstname;
	long phnumber;

	Person()
		:lastname("пусто"), firstname("пусто"), phnumber(0L) { }

	Person(std::string l, std::string f, long p)
		:lastname(l), firstname(f), phnumber(p) { }

	void Show() {
		std::cout << lastname << "\t\t" << firstname << "\t\t" << phnumber << "\n";
	}

};

class ComparePerson//функциональный объект
{
public:
	bool operator()(const Person* p1, const Person* p2)const {
		return (p1->firstname) < (p2->firstname);
	}
};

class DisplayPerson//функциональный объект
{
public:
	void operator()(Person* p) {
		p->Show();
	}
};
//--------------------------------------------------------------------------------------------------------------
class AirTime
{
	int h, m;
public:
	AirTime()
		:h(0), m(0) { }

	AirTime(int hour, int min)
		:h(hour), m(min) { }

	void Display();
	void Put();
	AirTime operator + (AirTime right) const;
	bool operator == (AirTime& at2);
};
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
void F15();
void f15_1();
void f15_2();
void f15_3();
void f15_4();
void f15_5();
void f15_6();
void f15_7();
void f15_8();
void f15_9();
