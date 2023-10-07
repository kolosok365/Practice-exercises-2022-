#pragma once

#include "Library.h"
struct Distance_2 {
	int feet;
	float inchec;
};

struct Time_2 {
	int ch;
	int m;
	int s;
};

void F5();

float circarea(float r);
double power(double n, int p = 2);
void zeroSmaller(int& a1, int& a2);
Distance_2 f5_4(Distance_2 a, Distance_2 b);
long f5_5(int hours, int minutes, int seconds);
long time_to_secs(Time_2 ob);
Time_2 secs_to_time(long sec);
char power(char n, int p = 2);
int power(int n, int p = 2);
long power(long n, int p = 2);
float power(float n, int p = 2);
void swap(int& a, int& b);
void swap(Time_2& ob_1, Time_2& ob_2);
void repeat_1(int k);
void repeat_2();