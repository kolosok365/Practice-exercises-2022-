#include "Training_5.h"


//--------------------------------------------------------------------------------------------------------------
float circarea(float r) {
	float rez = M_PI * r * r;
	return rez;

}
//--------------------------------------------------------------------------------------------------------------
double power(double n, int p) {
	double rez = 1;
	for (int i = 0; i < p; i++)
		rez *= n;
	return rez;
}
//--------------------------------------------------------------------------------------------------------------
void zeroSmaller(int& a1, int& a2) {
	a1 > a2 ? a2 = 0 : a1 = 0;
}
//--------------------------------------------------------------------------------------------------------------
Distance_2 f5_4(Distance_2 a, Distance_2 b) {
	float sum1, sum2;
	sum1 = (a.feet * 12) + a.inchec;
	sum2 = (b.feet * 12) + b.inchec;

	if (sum1 > sum2)
		return a;
	else
		return b;

}
//--------------------------------------------------------------------------------------------------------------
long f5_5(int hours, int minutes, int seconds) {
	return hours * 3600 + minutes * 60 + seconds;
}
//--------------------------------------------------------------------------------------------------------------
long time_to_secs(Time_2 ob) {
	return ob.ch * 3600 + ob.m * 60 + ob.s;
}

Time_2 secs_to_time(long sec) {
	Time_2 rez;
	rez.ch = sec / 3600;
	rez.m = (sec - rez.ch * 3600) / 60;
	rez.s = sec - rez.ch * 3600 - rez.m * 60;
	return rez;

}
//--------------------------------------------------------------------------------------------------------------
char power(char n, int p) {
	char rez = 1;
	for (int i = 0; i < p; i++)
		rez *= n;
	return rez;
}

int power(int n, int p) {
	int rez = 1;
	for (int i = 0; i < p; i++)
		rez *= n;
	return rez;
}

long power(long n, int p) {
	long rez = 1;
	for (int i = 0; i < p; i++)
		rez *= n;
	return rez;
}

float power(float n, int p) {
	float rez = 1;
	for (int i = 0; i < p; i++)
		rez *= n;
	return rez;
}
//--------------------------------------------------------------------------------------------------------------
void swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
//--------------------------------------------------------------------------------------------------------------
void swap(Time_2& ob_1, Time_2& ob_2) {
	Time_2 t;

	t.ch = ob_1.ch;
	t.m = ob_1.m;
	t.s = ob_1.s;

	ob_1.ch = ob_2.ch;
	ob_1.m = ob_2.m;
	ob_1.s = ob_2.s;

	ob_2.ch = t.ch;
	ob_2.m = t.m;
	ob_2.s = t.s;

}
//--------------------------------------------------------------------------------------------------------------
void repeat_1(int k) {
	std::cout << "Функция repeat_1 вызвана " << k << " раз\n";
}
//--------------------------------------------------------------------------------------------------------------
void repeat_2() {
	static int k = 0;
	std::cout << "Функция repeat_2 вызвана " << k++ << " раз\n";
}
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
void F5() {
	std::cout << "Введите № упражнения 5 главы: ";
	std::cin >> Num;

	switch (Num)
	{
	case 1: {
		std::cout << "\nВведите радиус круга: ";
		float rad;
		std::cin >> rad;
		std::cout << "\nПлощадь круга с радиусом " << rad << " равна " << circarea(rad);
		break;
	}

	case 2: {
		std::cout << "\nВведите число:";
		int n, p;
		std::cin >> n;
		std::cout << "\nПо умолчанию значение степени = 2. Желаете изменить степень?(Нажмите \"y\", если ДА, иначе любую другую клавишу...)";
		char t;
		t = _getch();
		if (t == 'y' || t == 'Y') {
			std::cout << "\nВведите степень:";
			std::cin >> p;
			std::cout << std::endl << "Ответ " << power(n, p);
		}
		else
			std::cout << std::endl << "Ответ " << power(n);
		break;
	}

	case 3: {
		int a, b;
		std::cout << "Введите числа для сравнения:";
		std::cin >> a >> b;
		std::cout << "\nВведённые числа до функции:" << a << " " << b;
		zeroSmaller(a, b);
		std::cout << "\nВведённые числа после функции:" << a << " " << b;
		break;
	}

	case 4: {
		Distance_2 ob1, ob2;
		std::cout << "Введите футы и дюймы первого аргумента:";
		std::cin >> ob1.feet >> ob1.inchec;
		std::cout << "Введите футы и дюймы второго аргумента:";
		std::cin >> ob2.feet >> ob2.inchec;
		std::cout << f5_4(ob1, ob2).feet << " " << f5_4(ob1, ob2).inchec;
		break;
	}

	case 5: {
		do {
			int ch, m, s;
			std::cout << "Введите часы, минуты, секунды. Для выхода введите \"-1\"...\n";
			std::cin >> ch;

			if (ch == -1)
				break;

			std::cin >> m >> s;
			std::cout << "Время в секундах = " << f5_5(ch, m, s) << "\n";
		} while (true);
		break;
	}

	case 6: {
		Time_2 a1, b1, c;
		char zn;

		std::cout << "Введите 1-ое время в формате \"Часы:Минуты:Секунды\" ";
		std::cin >> a1.ch >> zn >> a1.m >> zn >> a1.s;

		std::cout << "\nВведите 2-ое время в формате \"Часы:Минуты:Секунды\" ";
		std::cin >> b1.ch >> zn >> b1.m >> zn >> b1.s;

		long rez;
		rez = time_to_secs(a1) + time_to_secs(b1);

		c = secs_to_time(rez);
		std::cout << c.ch << zn << c.m << zn << c.s;
		break;
	}

	case 7: {
		std::cout << std::endl << power('a') << std::endl;
		std::cout << std::endl << power(5) << std::endl;
		std::cout << std::endl << power(9l) << std::endl;
		std::cout << std::endl << power(7.0f) << std::endl;
		break;
	}

	case 8: {
		int c, d;
		std::cout << "Введите первое и второе число:";
		std::cin >> c >> d;
		std::cout << "До функции с=" << c << " и d=" << d;
		swap(c, d);
		std::cout << "\nПосле функции с=" << c << " и d=" << d;

	}

	case 9: {
		Time_2 a1, b1, c;
		char zn;

		std::cout << "Введите 1-ое время в формате \"Часы:Минуты:Секунды\" ";
		std::cin >> a1.ch >> zn >> a1.m >> zn >> a1.s;

		std::cout << "\nВведите 2-ое время в формате \"Часы:Минуты:Секунды\" ";
		std::cin >> b1.ch >> zn >> b1.m >> zn >> b1.s;

		swap(a1, b1);

		std::cout << "\n" << a1.ch << zn << a1.m << zn << a1.s;
		std::cout << "\n" << b1.ch << zn << b1.m << zn << b1.s;
	}

	case 10: {
		int kol = 0;

		while (kol++ < 10)
			repeat_1(kol);

		for (int i = 0; i < 10; i++)
			repeat_2();

	}
	default:
		break;
	}
}