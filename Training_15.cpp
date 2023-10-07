#include "Training_15.h"

//--------------------------------------------------------------------------------------------------------------
void f15_1() {
	float arr[]{ 1000.45, 45.7, 3.66, 898.1, 590.1, 1.259 };
	std::sort(arr, arr + 6);

	for (int i = 0; i < 6; i++) {
		std::cout << arr[i] << " ";
	}
}
//--------------------------------------------------------------------------------------------------------------
void f15_2() {
	std::vector<std::string> m;
	std::string name;
	int kol = 0;
	while (true) {
		std::cout << "Введите имя или нажмите 0 для выхода:";
		std::cin >> name;

		if (name == "0")
			break;

		m.push_back(name);
		kol++;
	}

	sort(m.begin(), m.end());

	for (int i = 0; i < m.size(); i++) {
		std::cout << m[i] << "\n";
	}
}
//--------------------------------------------------------------------------------------------------------------
void f15_3() {
	std::list<int> mylist;
	std::list<int>::iterator b, e, temp;
	mylist.push_back(33);
	mylist.push_back(65);
	mylist.push_back(109);
	mylist.push_back(76);
	mylist.push_back(122);
	mylist.push_back(234);
	mylist.push_back(1);

	b = mylist.begin();
	e = mylist.end();
	e--;

	copy(mylist.begin(), mylist.end(), std::ostream_iterator<int>(std::cout, " "));
	int c = mylist.size();

	while (c > 1) {
		std::swap(*b, *e);
		b++;
		e--;
		c -= 2;
	}

	copy(mylist.begin(), mylist.end(), std::ostream_iterator<int>(std::cout, " "));

}
//--------------------------------------------------------------------------------------------------------------
void f15_4() {
	std::multiset<Person*, ComparePerson> mymultset;

	Person* p1 = new Person("Иванов", "Иван", 893978256L);
	Person* p2 = new Person("Каримов", "Адиб", 758459839L);
	Person* p3 = new Person("Яблоков", "Яков", 423243243L);
	Person* p4 = new Person("Вишнев", "Василий", 44234563L);
	Person* p5 = new Person("Киселев", "Иван", 8989898L);

	mymultset.insert(p1);
	mymultset.insert(p2);
	mymultset.insert(p3);
	mymultset.insert(p4);
	mymultset.insert(p5);

	for_each(mymultset.begin(), mymultset.end(), DisplayPerson());

	mymultset.clear();
}
//--------------------------------------------------------------------------------------------------------------
void f15_5() {
	int m[]{ 222,642,132,2 };
	std::sort(m, m + 4);
	std::set<int> myset;
	myset.insert(223);
	myset.insert(7);
	myset.insert(21);

	std::vector<int> v;
	std::merge(m, m + 4, myset.begin(), myset.end(), std::back_inserter(v));
	std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
}
//--------------------------------------------------------------------------------------------------------------
void f15_6() {
	std::vector<int> v{ 22,45,6 };
	v.insert(v.begin(), 8);
	v.insert(v.begin() + 1, 9);
	//v.insert(v.begin() + 3, 98);
	v.push_back(9);
	v.push_back(7);

	for (auto x : v)
		std::cout << x << " ";

	std::cout << "\n";

	std::vector<int> ::iterator i;
	i = v.begin();

	std::vector<int> ::reverse_iterator ri;
	ri = v.rbegin();

	int l;
	while (std::distance(i, ri.base()) > 1) {
		std::swap(*i, *ri);
		i++;
		ri++;
		l = std::distance(i, ri.base());
	}

	for (auto x : v)
		std::cout << x << " ";
}
//--------------------------------------------------------------------------------------------------------------
void AirTime::Display() {
	std::cout << h << ":" << m;
}

void AirTime::Put() {
	char ch;
	std::cout << "\nВведите время (формат 12:59): ";
	std::cin >> h >> ch >> m;
}

AirTime AirTime::operator + (AirTime right) const {
	int th = h + right.h;
	int tm = m + right.m;
	if (tm >= 60) {
		th++;
		tm = -60;
	}
	return AirTime(th, tm);
}

bool AirTime::operator == (AirTime& at2) {
	return (h == at2.h) && (m = at2.m);
}

void f15_7() {
	char a;
	AirTime t, sum;
	std::list<AirTime> ml;

	do {
		t.Put();
		ml.push_back(t);
		std::cout << "Добавить время (д/н)? ";
		std::cin >> a;
	} while (a == 'д');

	sum = accumulate(ml.begin(), ml.end(), AirTime());
	std::cout << "\nСумма = ";
	sum.Display();
}
//--------------------------------------------------------------------------------------------------------------
void f15_8() {
	std::vector <int> v;       // создали два
	std::vector <int> answer;  // вектора

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	answer.push_back(0);
	answer.push_back(10);
	answer.push_back(20);
	answer.insert(answer.end(), { 30,40,50 });

	std::cout << "вектор answer до использования copy: ";
	copy(answer.begin(), answer.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::vector <int> ::iterator it = answer.begin(); // сделали итератор it который
	it++;                                         // указывает на начала answer

	copy(v.begin(), v.end(), it);   // изменили значения 

	std::cout << "вектор answer после оперирования методом copy: ";
	copy(answer.begin(), answer.end(), std::ostream_iterator<int>(std::cout, " "));  // вывели все
																									// элементы
}
//--------------------------------------------------------------------------------------------------------------
void f15_9() {
	std::vector<std::string> v;
	v.insert(v.begin(), { "Ауди","Ниссан","Мерседес","Сеат","Мазда","Пежо" });
	std::string search;
	std::cout << "Введите слово:";
	std::cin.ignore(MAXINT, '\n');
	std::getline(std::cin, search);

	std::vector<std::string>::iterator pos;
	//pos = find_if(v.begin(), v.end(), std::bind1st(std::equal_to <std::string>(),search));
	pos = find(v.begin(), v.end(), search);

	if (pos == v.end())
		std::cout << "Такого слова в этом списке нет!";
	else
		std::cout << "Такое слово есть в списке на позиции " << pos - v.begin();


}
//--------------------------------------------------------------------------------------------------------------

void F15() {
	std::cout << "Введите № упражнения 15 главы:";
	std::cin >> Num;

	switch (Num)
	{
	case 1: {
		f15_1();
		break;
	}

	case 2: {
		f15_2();
		break;
	}

	case 3: {
		f15_3();
		break;
	}
	case 4: {
		f15_4();
		break;
	}

	case 5: {
		f15_5();
		break;
	}

	case 6: {
		f15_6();
		break;
	}
	case 7: {
		f15_7();
		break;
	}
	case 8: {
		f15_8();
		break;
	}
	case 9: {
		f15_9();
		break;
	}

	default:
		break;
	}
}