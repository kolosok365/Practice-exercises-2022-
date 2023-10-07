#include "Training_3.h"
#include "Training_4.h"
#include "Training_5.h"
#include "Training_6.h"
#include "Training_7.h"
#include "Training_8.h"
#include "Training_9.h"
#include "Training_10.h"
#include "Training_11.h"
#include "Training_12.h"
#include "Training_14.h"
#include "Training_15.h"

enum class E {
	fir,
	sec
};

int main() {
	std::cout << static_cast<size_t>(E::sec);
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	do {
		std::cout << "Введите № главы или \"0\" для завершения работы: ";
		std::cin >> Num;
		std::cout << std::endl;

		switch (Num) {//выбор № главы

		case 3:
			F3();
			break;

		case 4:
			F4();
			break;

		case 5:
			F5();
			break;

		case 6:
			F6();
			break;

		case 7:
			F7();
			break;

		case 8:
			F8();
			break;

		case 9:
			F9();
			break;

		case 10:
			F10();
			break;

		case 11:
			F11();
			break;

		case 12:
			F12();
			break;

		case 14:
			F14();
			break;

		case 15:
			F15();
			break;

		case 0:
			exit(0);
		}

		std::cout << "\n\nНажмите любую клавишу для продолжения...";
		_getch();
		system("cls");

	} while (Num != 0);

	return 0;

}