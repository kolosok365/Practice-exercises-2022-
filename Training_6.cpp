#include"Training_6.h"

void f6_1() {
	Int a;
	Int b(5);
	Int c(12);

	a.Show_Int();
	std::cout << " ";
	b.Show_Int();
	std::cout << " ";
	c.Show_Int();
	std::cout << "\n";

	Int temp;
	temp = a.Add_Int(b);
	temp = temp.Add_Int(c);
	temp.Show_Int();
}
//--------------------------------------------------------------------------------------------------------------
TollBooth::TollBooth()
	:kol(0), sum(0)
{
}

void TollBooth::PayingCar() {
	kol++;
	sum += 0.50;
}

void TollBooth::NopayCar() {
	kol++;
}

void TollBooth::Display()const {
	std::cout << "\nКоличество машин:" << kol << "\nВыручка:" << sum;
}

void f6_2() {
	char ch;
	TollBooth ob;

	do {
		ch = _getch();

		if (ch == '\t')
			ob.PayingCar();

		else if (ch == ' ')
			ob.NopayCar();

	} while (ch != '\x1b');
	ob.Display();

}
//--------------------------------------------------------------------------------------------------------------
Time_6::Time_6()
	:ch(0), m(0), sec(0)
{
}

Time_6::Time_6(int v1, int v2, int v3)
	: ch(v1), m(v2), sec(v3)
{
}

void Time_6::Show() {
	std::cout << ch << ":" << m << ":" << sec << "\n";
}

Time_6 Time_6::Add(Time_6 ob1, Time_6 ob2) {

	Time_6 temp;

	int sum_1 = ob1.ch * 3600 + ob1.m * 60 + ob1.sec;
	int sum_2 = ob2.ch * 3600 + ob2.m * 60 + ob2.sec;
	sum_1 += sum_2;

	temp.ch = sum_1 / 3600;
	temp.m = (sum_1 - temp.ch * 3600) / 60;
	temp.sec = sum_1 - temp.ch * 3600 - temp.m * 60;

	return temp;
}

void f6_3() {
	Time_6 ob1(2, 56, 13);
	Time_6 ob2(15, 07, 9);
	Time_6 ob3;

	ob3.Show();

	ob3 = ob3.Add(ob1, ob2);

	ob1.Show();
	ob2.Show();
	ob3.Show();

}
//--------------------------------------------------------------------------------------------------------------
void Employee::SetNumber(int i) {
	number = i;
}

void Employee::SetPlata(float p) {
	plata = p;
}

void Employee::Show() {
	std::cout << "Номер:" << number;
	std::cout << "\nЗарплата:" << plata << "\n\n";
}

void f6_4() {
	Employee w1, w2, w3;
	int n;
	float p;

	for (int i = 1; i < 4; i++) {
		std::cout << "Введите номер и зарплату для " << i << " сотркдника:";
		std::cin >> n >> p;

		if (i == 1) {
			w1.SetNumber(n);
			w1.SetPlata(p);
		}

		else if (i == 2) {
			w2.SetNumber(n);
			w2.SetPlata(p);
		}

		else if (i == 3) {
			w3.SetNumber(n);
			w3.SetPlata(p);
		}

	}

	w1.Show();
	w2.Show();
	w3.Show();

}
//--------------------------------------------------------------------------------------------------------------
void Date_6::GetDate() {
	std::cout << "Введите данные в формате \"день/месяц/год\"\n";
	char ch;
	std::cin >> day >> ch >> month >> ch >> year;
}

void Date_6::ShowDate() {
	std::cout << day << "/" << month << "/" << year << "\n";
}

void f6_5() {
	Date_6 t1, t2;

	t1.GetDate();
	t2.GetDate();

	t1.ShowDate();
	t2.ShowDate();
}
//--------------------------------------------------------------------------------------------------------------
void Employee::ShowType() {

	switch (type)
	{
	case 0: {
		std::cout << "laborer\n";
		break;
	}

	case 1: {
		std::cout << "secretary\n";
		break;
	}

	case 2: {
		std::cout << "manager\n";
		break;
	}

	case 3: {
		std::cout << "accountant\n";
		break;
	}

	case 4: {
		std::cout << "executive\n";
		break;
	}

	case 5: {
		std::cout << "researcher\n";
		break;
	}

	default: {
		std::cout << "Нет такого варианта!\n";
		break;
	}
	}
}

Etype Employee::SetType() {

	char ch;
	std::cout << "Введите первую букву должности (laborer, secretary, manager, accountant, executive, researcher)";
	std::cout << std::endl << std::endl;

	switch (ch = _getch())
	{
	case 'l':
		type = laborer;
		return type;

	case 's':
		type = secretary;
		return type;

	case 'm':
		type = manager;
		return type;

	case 'a':
		type = accountant;
		return type;

	case 'e':
		type = executive;
		return type;

	case 'r':
		type = researcher;
		return type;

	default:
		std::cout << "Нет такого варианта!\n";
		break;
	}

}

void Employee::GetEmploee(int num) {

	int n, p;
	std::cout << "Введите информацию для " << num << " сотркдника.";
	std::cout << "\nНомер:"; std::cin >> n;
	std::cout << "Зарплата:"; std::cin >> p;

	if (num == 1) {
		number = n;
		plata = p;
		date.GetDate();
		type = SetType();
	}

	else if (num == 2) {
		number = n;
		plata = p;
		date.GetDate();
		type = SetType();
	}

	else if (num == 3) {
		number = n;
		plata = p;
		date.GetDate();
		type = SetType();
	}
}

void Employee::PutEmloe() {

	std::cout << "Номер:" << number;
	std::cout << "\nЗарплата:" << plata << "\n";
	date.ShowDate();
	this->ShowType();

}

void f6_6() {

	Employee w1, w2, w3;

	for (int i = 1; i < 4; i++) {
		if (i == 1)
			w1.GetEmploee(i);

		else if (i == 2)
			w2.GetEmploee(i);

		else if (i == 3)
			w3.GetEmploee(i);
	}
	w1.PutEmloe();
	w2.PutEmloe();
	w3.PutEmloe();


}
//--------------------------------------------------------------------------------------------------------------
Coords::Coords()
{

	longe.gr = 0;
	longe.minut = 0;
	longe.direction = 0;

	width.gr = 0;
	width.minut = 0;
	width.direction = 0;

}

Coords::Coords(int g, float m, char direct, char lw)
{
	if (lw == 'l') {
		longe.gr = g;
		longe.minut = m;
		longe.direction = direct;

		width.gr = 0;
		width.minut = 0;
		width.direction = 0;

	}

	else if (lw == 'w') {
		width.gr = g;
		width.minut = m;
		width.direction = direct;

		longe.gr = 0;
		longe.minut = 0;
		longe.direction = 0;
	}
}

void Angle::Set() {
	std::cout << "Введите градусы \xF8:";
	std::cin >> gr;
	std::cout << "Введите минуты ':";
	std::cin >> minut;
	std::cout << "Введите направление:";
	std::cin >> direction;
}

void Coords::SetAngle() {

	char answer;

	std::cout << "\nТребуется вводить долготу?(y/n)";
	answer = _getch();

	if (answer == 'y')
		longe.Set();

	std::cout << "\nТребуется вводить широту?(y/n)";
	answer = _getch();

	if (answer == 'y')
		width.Set();

}

void Coords::ShowAngle() {
	std::cout << "\nГрадусы \xF8 долготы:" << longe.gr << "\nМинуты ' долготы:" << longe.minut << "\nНаправление долготы:" << longe.direction;
	std::cout << "\nГрадусы \xF8 широты:" << width.gr << "\nМинуты ' широты:" << width.minut << "\nНаправление широты:" << width.direction;
}

void f6_7() {
	Coords ob1(34, 66.7, 'W', 'l'), ob2(101, 12.2, 'E', 'w'), ob3;
	ob3.SetAngle();
	ob1.ShowAngle();
	ob2.ShowAngle();
	ob3.ShowAngle();
}
//--------------------------------------------------------------------------------------------------------------
int St::number = 0;

void St::Show() {
	std::cout << "Мой порядковый номер " << mynumber << "\n";
}

void f6_8() {
	St s1, s2, s3;
	s1.Show();
	s2.Show();
	s3.Show();
}
//--------------------------------------------------------------------------------------------------------------
void Fract::FractSet(int c, int z) {
	chisl = c;
	znam = z;
}

Fract Fract::operator + (Fract a) {
	Fract rez;
	int ch, zn;
	rez.chisl = (chisl * a.znam + znam * a.chisl);
	rez.znam = znam * a.znam;
	return rez;
}

void f6_9() {
	int ch, zn;
	char dr;
	Fract ob1, ob2, ob3;

	do {
		std::cout << "\nВведите превую дробь в формате \"a/b\":";
		std::cin >> ch >> dr >> zn;
		ob1.FractSet(ch, zn);

		std::cout << "Введите вторую дробь в формате \"a/b\":";
		std::cin >> ch >> dr >> zn;
		ob2.FractSet(ch, zn);

		ob3 = ob1 + ob2;
		std::cout << "Сумма равна:" << ob3.chisl << dr << ob3.znam;

		std::cout << "\nТребуется вводить новую пару дробей?(y/n)";

		if (_getch() == 'n')
			break;
	} while (true);
}
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------

void F6() {
	std::cout << "Выберите № упражнения 6 главы:";
	std::cin >> Num;

	switch (Num)
	{
	case 1: {
		f6_1();
		break;
	}
	case 2: {
		f6_2();
		break;
	}
	case 3: {
		f6_3();
		break;
	}
	case 4: {
		f6_4();
		break;
	}
	case 5: {
		f6_5();
		break;
	}
	case 6: {
		f6_6();
		break;
	}
	case 7: {
		f6_7();
		break;
	}
	case 8: {
		f6_8();
		break;
	}
	case 9: {
		f6_9();
		break;
	}
	default:
		break;
	}

}