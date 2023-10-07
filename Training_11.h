#pragma once

#include "Library.h"

//--------------------------------------------------------------------------------------------------------------
class Publication11
{
protected:
	std::string Name;
	int Price;
public:
	virtual void SetData();
	virtual void GetData();
	virtual ~Publication11() {
		std::cout << "\nДеструктор базового класса";
	}
	virtual void IsOverSize() = 0;//делаю класс абстарктным, то есть невозможно создать объект Publication11. Нужен только для наследования!
};

class Book11 :public Publication11
{
protected:
	int Kolstr;
public:
	~Book11() {
		std::cout << "\nУничтожение объекта Book11";
	}
	void SetData();
	void GetData();
	void IsOverSize();//функиция принадлежит классу потомку. Если тут не напишу, то не будет работать
};

class Type11 :public Publication11
{
protected:
	float Timezapis;
public:
	~Type11() {
		std::cout << "\nУничтожение объекта Type11";
	}
	void SetData();
	void GetData();
	void IsOverSize();//функиция принадлежит классу потомку. Если тут не напишу, то не будет работать
};
//--------------------------------------------------------------------------------------------------------------
class Distance_11 {
	int id;
	int feet;
	float inches;
public:
	static int count;
	Distance_11() : feet(0), inches(0) {};
	Distance_11(int f, float i) : feet(f), inches(i), id(count) {
		++count;
	};

	Distance_11(float f) {
		feet = int(f);
		inches = 12 * (f - feet);
	}

	friend Distance_11& operator * (Distance_11 ob1, Distance_11 ob2) {
		float var = (ob1.feet + ob1.inches / 12) * (ob2.feet + ob2.inches / 12);
		int var2 = (ob1.feet + ob1.inches / 12) * (ob2.feet + ob2.inches / 12);
		int rezfeet = int(var);
		float rezinches = 12 * (var - rezfeet);
		Distance_11 rez(rezfeet, rezinches);
		return rez;
	}

	void Show();
};
//--------------------------------------------------------------------------------------------------------------
class Array {

private:
	int* ptr;
	int size;

public:

	Array(int s) {
		size = s;
		ptr = new int[s];
	}

	~Array() {
		delete[] ptr;
	}

	int& operator [](int j) {
		return *(ptr + j);
	}

	Array operator = (const Array& a) {//перегрузка оперптора присваивания
		delete[] ptr;
		size = a.size;
		ptr = new int[size];

		for (int i = 0; i < size; i++) {
			ptr[i] = a.ptr[i];
		}

		//return Array(size);
		return *this;
	}

	Array(const Array& a) {//перегрузка конструктора копирования
		size = a.size;
		ptr = new int[size];

		for (int i = 0; i < size; i++) {
			ptr[i] = a.ptr[i];
		}
	}
};
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------

void F11();
void f11_1();
void f11_3();
void f11_4();
void f11_5();
