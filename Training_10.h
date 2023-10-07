#pragma once
#include "Library.h"

//--------------------------------------------------------------------------------------------------------------
struct Link
{
	int Date;
	Link* Next = NULL;

};

class LinkList
{
	Link* first;
	Link* start;

public:
	LinkList() :first(NULL) {};
	~LinkList();
	void Add(int d);
	void Show();
};
//--------------------------------------------------------------------------------------------------------------

void F10();
void f10_1();
float sum(float* mas, int k);
void f10_2(char* s);
void f10_3();
void f10_4();
void f10_5();
void Addarrays(float* f1, float* f2, float* f3, int k);
void f10_6();
int Compstr(char* s1, char* s2);