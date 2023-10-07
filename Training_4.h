#pragma once
#include "Library.h"
//--------------------------------------------------------------------------------------------------------------
struct Phone
{
	int code_city;
	int phone_station;
	int phone_user;
};
//--------------------------------------------------------------------------------------------------------------
struct Point
{
	int x;
	int y;

	Point operator+(Point st) {//перегрузка опреатора "+"

		Point temp;
		temp.x = x + st.x;
		temp.y = y + st.y;
		return temp;
	}
};
//--------------------------------------------------------------------------------------------------------------
struct Distance
{
	int feet;
	float inchec;
};
//--------------------------------------------------------------------------------------------------------------
struct Volume
{
	Distance length;
	Distance width;
	Distance height;
};
//--------------------------------------------------------------------------------------------------------------
struct Date
{
	int day;
	int month;
	int year;
};
//--------------------------------------------------------------------------------------------------------------
struct Emploee
{
	int number;
	float salary;
	Etype dolgnost;
	Date date;

};
//--------------------------------------------------------------------------------------------------------------
struct Fraction
{
	int chisl;
	int znam;

	Fraction operator + (Fraction t1) {

		Fraction temp;
		temp.chisl = (chisl * t1.znam + znam * t1.chisl);
		temp.znam = znam * t1.znam;
		return temp;
	}
};
//--------------------------------------------------------------------------------------------------------------
struct Time
{
	int hours;
	int minutes;
	int seconds;


};
//--------------------------------------------------------------------------------------------------------------

void F4();

void f4_1();
void f4_2();
void f4_3();
void f4_4();
void f4_5();
void f4_6();
void f4_7();
void f4_8();
void f4_9();
