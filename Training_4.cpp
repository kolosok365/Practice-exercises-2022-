#include "Training_4.h"

void f4_1() {

	Phone ph_1 = { 800, 905, 630 }, ph_2;

	std::cout << "Введите код города, номер телефонной станции, номер абонента:\n";
	std::cin >> ph_2.code_city >> ph_2.phone_station >> ph_2.phone_user;

	std::cout << "\nМой номер: " << ph_1.code_city << " " << ph_1.phone_station << " " << ph_1.phone_user;
	std::cout << "\nВаш номер: " << ph_2.code_city << " " << ph_2.phone_station << " " << ph_2.phone_user;

}
//--------------------------------------------------------------------------------------------------------------
void f4_2() {

	Point p1, p2, p3;

	std::cout << "Введите координаты точки p1: ";
	std::cin >> p1.x >> p1.y;

	std::cout << "Введите координаты точки p2: ";
	std::cin >> p2.x >> p2.y;

	p3 = p1 + p2;

	std::cout << "\nКоординаты точки p1 + p2 равны " << p3.x << " " << p3.y;

}
//--------------------------------------------------------------------------------------------------------------
void f4_3() {

	Volume per;
	std::cout << "Введите длину, ширину и высоту помещения (кол_во футов дюйм)\n";
	std::cin >> per.length.feet >> per.length.inchec >> per.width.feet >> per.width.inchec >> per.height.feet >> per.height.inchec;
	float V = (per.length.feet + per.length.inchec / 12) * (per.width.feet + per.width.inchec / 12) * (per.height.feet + per.height.inchec / 12);
	std::cout << "\nОбъём помещения = " << V;

}
//--------------------------------------------------------------------------------------------------------------
void f4_4() {

	Emploee em_1, em_2, em_3;

	for (int i = 1; i < 4; i++) {

		std::cout << "Введите через пробел номер и зарплату " << i << "-го сотрудника:";

		if (i == 1)
			std::cin >> em_1.number >> em_1.salary;

		else if (i == 2)
			std::cin >> em_2.number >> em_2.salary;

		else if (i == 3)
			std::cin >> em_3.number >> em_3.salary;

		std::cout << "\n";
	}

	std::cout << std::setiosflags(std::ios::left);
	std::cout << "Информация о сотрудниках:\n";
	std::cout << std::setw(10) << "Номер" << std::setw(10) << "Зарплата" << "\n";
	std::cout << std::setw(10) << em_1.number << std::setw(10) << em_1.salary << "\n";
	std::cout << std::setw(10) << em_2.number << std::setw(10) << em_2.salary << "\n";
	std::cout << std::setw(10) << em_3.number << std::setw(10) << em_3.salary << "\n";

}
//--------------------------------------------------------------------------------------------------------------
void f4_5() {

	Date d;

	std::cout << "Введите день, месяц и год в формате 31/12/2002\n";
	std::cin >> d.day;
	std::cin.ignore();
	std::cin >> d.month;
	std::cin.ignore();
	std::cin >> d.year;

	std::cout << "\nВы ввели " << d.day << "/" << d.month << "/" << d.year;

}
//--------------------------------------------------------------------------------------------------------------
void f4_6() {

	Etype t;
	char ch;

	std::cout << "Введите первую букву должности (laborer, secretary, manager, accountant, executive, researcher)";

	switch (ch = _getch())
	{
	case 'l':
		t = laborer;
		break;

	case 's':
		t = secretary;
		break;

	case 'm':
		t = manager;
		break;

	case 'a':
		t = accountant;
		break;

	case 'e':
		t = executive;
		break;

	case 'r':
		t = researcher;
		break;

	default:
		std::cout << "Нет такого варианта!\n";
		break;
	}

	std::cout << "\nВы ввели:" << t;
}
//--------------------------------------------------------------------------------------------------------------
void f4_7() {

	Emploee em_1, em_2, em_3;
	char ch;
	std::string s;

	std::cout << "Введите номер, величину зарплаты, должность и дату принятия на работу 1-го сотрудника: ";
	std::cin >> em_1.number >> em_1.salary;

	std::cin >> s;

	if (s == "laborer") em_1.dolgnost = Etype::laborer;
	else if (s == "secretary") em_1.dolgnost = Etype::secretary;
	else if (s == "manager") em_1.dolgnost = Etype::manager;
	else if (s == "accountant") em_1.dolgnost = Etype::accountant;

	std::cin >> em_1.date.day >> ch >> em_1.date.month >> ch >> em_1.date.year;


	std::cout << "\nВведите номер, величину зарплаты, должность и дату принятия на работу 2-го сотрудника: ";
	std::cin >> em_2.number >> em_2.salary;

	std::cin >> s;

	if (s == "laborer") em_2.dolgnost = Etype::laborer;
	else if (s == "secretary") em_2.dolgnost = Etype::secretary;
	else if (s == "manager") em_2.dolgnost = Etype::manager;
	else if (s == "accountant") em_2.dolgnost = Etype::accountant;

	std::cin >> em_2.date.day >> ch >> em_2.date.month >> ch >> em_2.date.year;



	std::cout << "Введите номер, величину зарплаты, должность и дату принятия на работу 3-го сотрудника: ";
	std::cin >> em_3.number >> em_3.salary;

	std::cin >> s;

	if (s == "laborer") em_3.dolgnost = Etype::laborer;
	else if (s == "secretary") em_3.dolgnost = Etype::secretary;
	else if (s == "manager") em_3.dolgnost = Etype::manager;
	else if (s == "accountant") em_3.dolgnost = Etype::accountant;

	std::cin >> em_3.date.day >> ch >> em_3.date.month >> ch >> em_3.date.year;

	std::cout << std::setiosflags(std::ios::left);
	std::cout << "Информация о сотрудниках:\n";
	std::cout << std::setw(20) << "Номер" << std::setw(20) << "Зарплата" << std::setw(20) << "Должность" << std::setw(20) << "Дата" << std::endl;
	std::cout << std::setw(20) << em_1.number << std::setw(20) << em_1.salary << std::setw(20) << em_1.dolgnost << em_1.date.day << "/" << em_1.date.month << "/" << em_1.date.year << "/" "\n";
	std::cout << std::setw(20) << em_2.number << std::setw(20) << em_2.salary << std::setw(20) << em_2.dolgnost << em_2.date.day << "/" << em_2.date.month << "/" << em_2.date.year << "/" "\n";
	std::cout << std::setw(20) << em_3.number << std::setw(20) << em_3.salary << std::setw(20) << em_3.dolgnost << em_3.date.day << "/" << em_3.date.month << "/" << em_3.date.year << "/" "\n";

}
//--------------------------------------------------------------------------------------------------------------
void f4_8() {

	Fraction a, b;
	char zn;

	std::cout << "Введите первую дробь в формате x/y: ";
	std::cin >> a.chisl >> zn >> a.znam;

	std::cout << "Введите вторую дробь в формате x/y: ";
	std::cin >> b.chisl >> zn >> b.znam;

	Fraction rez;
	rez = a + b;

	std::cout << "Сумма равна " << rez.chisl << "/" << rez.znam;

}
//--------------------------------------------------------------------------------------------------------------
void f4_9() {

	Time t1;
	char zn;

	std::cout << "Введите время в формате \"Часы:Минуты:Секунды\" ";
	std::cin >> t1.hours >> zn >> t1.minutes >> zn >> t1.seconds;

	long totalseсs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;

	std::cout << "\nКоличество секунд = " << totalseсs;
}
//--------------------------------------------------------------------------------------------------------------
void f4_11() {

	Time t1, t2, Rez;
	char zn;

	std::cout << "Введите 1-ое время в формате \"Часы:Минуты:Секунды\" ";
	std::cin >> t1.hours >> zn >> t1.minutes >> zn >> t1.seconds;

	std::cout << "\nВведите 2-ое время в формате \"Часы:Минуты:Секунды\" ";
	std::cin >> t2.hours >> zn >> t2.minutes >> zn >> t2.seconds;

	long totalseсs_1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	long totalseсs_2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

	long rez = totalseсs_1 + totalseсs_2;

	Rez.hours = rez / 3600;
	Rez.minutes = (rez - Rez.hours * 3600) / 60;
	Rez.seconds = rez - Rez.hours * 3600 - Rez.minutes * 60;

	std::cout << "\nНовое суммированное время = " << Rez.hours << zn << Rez.minutes << zn << Rez.seconds;
}
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
void F4() {

	std::cout << "Введите № упражения 4 главы: ";
	std::cin >> Num;

	switch (Num)
	{
	case 1:
		f4_1();
		break;

	case 2:
		f4_2();
		break;

	case 3:
		f4_3();
		break;

	case 4:
		f4_4();
		break;

	case 5:
		f4_5();
		break;

	case 6:
		f4_6();
		break;

	case 7:
		f4_7();
		break;

	case 8:
		f4_8();
		break;

	case 9:
		f4_9();
		break;

	case 11:
		f4_11();
		break;

	default:
		break;
	}

}