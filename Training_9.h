#pragma once
#include "Library.h"

//--------------------------------------------------------------------------------------------------------------
class Publication
{
protected:
	std::string Name;
	int Price;
public:
	void SetData();
	void GetData();
};

class Book :public Publication
{
private:
	int Kolstr;
public:
	void SetData();
	void GetData();
};

class Type :public Publication
{
private:
	float Timezapis;
public:
	void SetData();
	void GetData();
};
//--------------------------------------------------------------------------------------------------------------

void F9();
void f9_1();
