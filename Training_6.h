#pragma once
#include "Library.h"



//--------------------------------------------------------------------------------------------------------------
class Int
{
public:
	int v;

	Int()
		:v(0)
	{
	}

	Int(int i)
		:v(i)
	{
	}

	void Show_Int() {
		std::cout << v;
	}

	Int Add_Int(Int b) {
		Int temp;
		temp.v = v + b.v;
		return temp;
	}

};
//--------------------------------------------------------------------------------------------------------------
class TollBooth
{
	unsigned int kol;
	double sum;

public:
	TollBooth();
	void PayingCar();
	void NopayCar();
	void Display()const;
};
//--------------------------------------------------------------------------------------------------------------
class Time_6
{
	int ch;
	int m;
	int sec;

public:
	Time_6();
	Time_6(int v1, int v2, int v3);
	void Show();
	Time_6 Add(Time_6 ob1, Time_6 ob2);

};
//--------------------------------------------------------------------------------------------------------------
class Date_6
{
	int day;
	int month;
	int year;

public:
	void GetDate();
	void ShowDate();
};
//--------------------------------------------------------------------------------------------------------------
class Employee
{
	int number;
	float plata;
	Date_6 date;
	Etype type;

public:
	void SetNumber(int i);
	void SetPlata(float p);
	void Show();
	void GetEmploee(int num);
	void PutEmloe();
	Etype SetType();
	void ShowType();

};
//--------------------------------------------------------------------------------------------------------------
class Angle
{
public:
	int gr;
	float minut;
	char direction;

	void Set();
};

class Coords
{
public:
	Angle longe;
	Angle width;

	Coords();
	Coords(int gr, float min, char direct, char lw);
	void SetAngle();

	void ShowAngle();

};
//--------------------------------------------------------------------------------------------------------------
class St
{
public:
	int mynumber;
	static int number;
	void Show();

	St() {
		number++;
		mynumber = number;
	}
};
//--------------------------------------------------------------------------------------------------------------
class Fract
{
public:
	int chisl;
	int znam;
	void FractSet(int, int);
	Fract operator + (Fract a);
};
//--------------------------------------------------------------------------------------------------------------
void F6();
void f6_1();
void f6_2();
void f6_4();
void f6_5();
void f6_6();
void f6_7();
void f6_8();
void f6_9();