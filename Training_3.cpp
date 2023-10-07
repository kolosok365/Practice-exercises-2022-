#include "Training_3.h"

//--------------------------------------------------------------------------------------------------------------
void f3_1() {

	unsigned long n; // число
	std::cout << "\nВведите число:";
	std::cin >> n; // получить число

	for (int i = 1; i <= 200; i++) {

		std::cout << std::setw(7) << n * i;

		if (!(i % 10))
			std::cout << std::endl;
	}
}
//--------------------------------------------------------------------------------------------------------------
void f3_2() {

	std::cout << "Нажмите 1 для перевода шкалы Цельсия в шкалу Фаренгейта,\n"
		"2 для перевода шкалы Фаренгейта в шкалу Цельсия:";

	std::cin >> Num;
	double t;

	if (Num == 1) {
		std::cout << "\nВведите температуру по Цельсию: ";
		std::cin >> t;
		std::cout << "\nЗначение по Фаренгейту: " << (1.8 * t) + 32;

	}
	else if (Num == 2) {
		std::cout << "\nВведите температуру по Фаренгейту: ";
		std::cin >> t;
		std::cout << "\nЗначение по Цельсию: " << 0.555 * (t - 32);

	}
	else
		std::cout << "\nНет такого пункта!";
}
//--------------------------------------------------------------------------------------------------------------
void f3_3() {

	char ch = 'a';
	long total = 0;
	std::cout << "Введите число: ";

	while (ch != '\r') {
		ch = _getche();

		if (ch != '\r')
			total = total * 10 + ch - '0';//чтобы из кода символа получить цифру, вычтите из него 48 или '0'
	}
	std::cout << "\nВы ввели число: " << total;
}
//--------------------------------------------------------------------------------------------------------------
void f3_4() {

	char zn, answer;
	double a, b, rez = 0;

	do {

		std::cout << "Введите первый операнд, операцию и второй опрернд: ";
		std::cin >> a >> zn >> b;

		switch (zn)
		{
		case '*':
			rez = a * b;
			break;

		case '/':
			rez = a / b;
			break;

		case '+':
			rez = a + b;
			break;

		case '-':
			rez = a - b;
			break;

		default:
			std::cout << "\nНекорректный ввод!\n";
			break;
		}

		if (zn == '*' || zn == '/' || zn == '+' || zn == '-')
			std::cout << "\nРезультат равен: " << rez;

		std::cout << "\nВыполнить ещё одну операцию (y/n)? ";
		std::cin >> answer;
		std::cout << "\n";

	} while (answer == 'y');
}
//--------------------------------------------------------------------------------------------------------------
void f3_5() {

	std::setiosflags(std::ios::right);
	std::string s = "";
	for (int i = 0; i < 20; i++) {
		s = "";
		for (int j = 1, n = (1 + i * 2); j <= n; j++) {
			s += 'X';
		}
		std::cout << std::setw(50) << s;
		std::cout << "\n";
	}
}
//--------------------------------------------------------------------------------------------------------------
void f3_6() {
	int c, ans;

	do {
		ans = 1;
		std::cout << "Введите число, факториал которого надо вычесть: ";
		std::cin >> c;

		if (c == 0)
			break;

		for (; c > 0; c--) {
			ans *= c;
		}
		std::cout << "\nОтвет: " << ans;
		std::cout << "\n";
	} while (true);
}
//--------------------------------------------------------------------------------------------------------------
void f3_7() {

	double vkl = 0;
	int years = 0;
	float proc = 0;
	std::cout << "Введите начальный вклад: ";
	std::cin >> vkl;
	std::cout << "\nВведите число лет: ";
	std::cin >> years;
	std::cout << "\nВведите процентную ставку: ";
	std::cin >> proc;

	for (int i = 0; i < years; i++)
		vkl = vkl + (vkl * (proc / 100));
	std::cout << "\nЧерез " << years;

	if (years % 10 == 1)
		std::cout << " год ";
	else if (years % 10 > 1 && years % 10 < 5)
		std::cout << " года ";
	else
		std::cout << " лет ";

	std::cout << "Вы получите " << vkl;

}
//--------------------------------------------------------------------------------------------------------------
void f3_9() {
	int people = 1, places, var;
	std::cout << "Введите количество гостей: ";
	std::cin >> var;
	std::cout << "\nВведите количество мест: ";
	std::cin >> places;

	for (; var >= places - 1; var--)
		people *= var;

	std::cout << "\nОтвет: " << people;

}
//--------------------------------------------------------------------------------------------------------------
void f3_10() {

	double vkl = 0, need = 0;
	int years = 0;
	float proc = 0;

	std::cout << "Введите начальный вклад: ";
	std::cin >> vkl;

	std::cout << "\nВведите сколько надо получить: ";
	std::cin >> need;

	std::cout << "\nВведите процентную ставку: ";
	std::cin >> proc;

	while (vkl < need) {
		years++;
		vkl = vkl + (vkl * (proc / 100));
	}
	std::cout << "\nПотребуется " << years;

	if (years % 10 == 1)
		std::cout << " год ";
	else if (years % 10 > 1 && years % 10 < 5)
		std::cout << " года ";
	else
		std::cout << " лет ";

	std::cout << "и Вы получите " << vkl;

}
//--------------------------------------------------------------------------------------------------------------
void F3() {

	std::cout << "Введите № упражения 3 главы: ";
	std::cin >> Num;

	switch (Num)
	{
	case 1:
		f3_1();
		break;

	case 2:
		f3_2();
		break;

	case 3:
		f3_3();
		break;

	case 4:
		f3_4();
		break;

	case 5:
		f3_5();
		break;

	case 6:
		f3_6();
		break;

	case 7:
		f3_7();
		break;

	case 9:
		f3_9();
		break;

	case 10:
		f3_10();
		break;

	default:
		break;
	}

}