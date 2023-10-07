#pragma once
#include "Library.h"

class Distance_8 {
	int feet;
	float inches;
public:
	Distance_8();
	Distance_8(int f, float inch);
	void Set();
	Distance_8 operator - (Distance_8 ob2);
	void Show();
};
//--------------------------------------------------------------------------------------------------------------
void F8();
void f8_1();