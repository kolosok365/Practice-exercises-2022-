#pragma once

#include "Library.h"

//--------------------------------------------------------------------------------------------------------------
class Employee_7
{
	std::string Name;
	long Number;
public:
	static int kol;
	void GetData();
	void PutData();
	~Employee_7() {
		std::cout << "Я уничтожаюсь";
	}

};
//--------------------------------------------------------------------------------------------------------------
class Distance_7
{
public:
	Distance_7();
	int feet;
	int inches;
	static int count;
	void Set();
	Distance_7 operator +(Distance_7 ob);
	void Div();

};
//--------------------------------------------------------------------------------------------------------------
class Fract_7
{

public:
	int chisl;
	int znam;
	Fract_7();
	Fract_7 operator + (Fract_7 ob);
};
//--------------------------------------------------------------------------------------------------------------
class SafeArr
{
	int size;
	int* m;
public:
	void Put(int ind, int el);
	int Get(int ind);
	SafeArr(int size);
	~SafeArr();

};
//--------------------------------------------------------------------------------------------------------------
class Matrix
{
	int width;
	int height;
	int** matr = NULL;
public:
	Matrix(int h, int w);
	~Matrix();
	void Put(int m, int n, int el);
	int Get(int m, int n);
	void Show();
};
//--------------------------------------------------------------------------------------------------------------

void F7();
void f7_1();
void f7_2();
void f7_3();
void f7_4();
void f7_5();
void f7_8();
void f7_10();
void Reversit(std::string& s);