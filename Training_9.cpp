#include "Training_9.h"

//--------------------------------------------------------------------------------------------------------------
void Publication::SetData() {
	std::cout << "\n������� �������� �����:";
	std::cin.ignore(MAXINT, '\n');
	getline(std::cin, Name);
	std::cout << "������� ��������� �����:";
	std::cin >> Price;
}
void Publication::GetData() {
	std::cout << "\n�������� �����:" << Name << "\nC�������� �����:" << Price;
}

void Book::SetData() {
	Publication::SetData();
	std::cout << "������� ���������� ������� ����� " << Name << ":";
	std::cin >> Kolstr;
}
void Book::GetData() {
	Publication::GetData();
	std::cout << "\n���������� ������� ����� " << Name << ":" << Kolstr << "\n";
}

void Type::SetData() {
	Publication::SetData();
	std::cout << "������� ���������� ����� ������ ����� " << Name << ":";
	std::cin >> Timezapis;
}
void Type::GetData() {
	Publication::GetData();
	std::cout << "\n���������� ����� ������ ����� " << Name << ":" << Timezapis << "\n";
}

void f9_1() {
	Book book;
	Type type;

	book.SetData();
	type.SetData();

	book.GetData();
	type.GetData();

}

//--------------------------------------------------------------------------------------------------------------
//class A
//{
//private:
//	int priv;
//protected:
//	int prot;
//public:
//	int publ;
//};
//
//class B :public A
//{
//	
//	int a = prot;
//	void f() {
//		
//
//		B ob;
//		ob.publ;
//		ob.prot;
//	
//
//	
//	}
//};
//
//class C :protected A
//{
//	int a = prot;
//	void f() {
//
//		C oc;
//		oc.prot;
//		oc.publ;
//
//	
//	}
//};
//
//class D : private A
//{
//	int a = prot;
//	void f() {
//		D od;
//		od.prot;
//		od.publ;
//	}
//	
//	
//};
//
//class NB : public B
//{
//	int a = prot;
//	void f() {
//		B ob;
//		ob.publ;
//		ob.prot;
//
//	}
//};
//
//class NC : public C
//{
//	int a = prot;
//	void f() {
//		C oc;
//		oc.prot;
//		oc.publ;
//
//	}
//};
//
//class ND :public D
//{
//	int a = prot;
//	void f() {
//		D od;
//		od.prot;
//		od.publ;
//	}
//};
//
//void f() {
//	
//	B ob;
//	ob.publ;
//	
//
//	C oc;
//	
//	
//	D od;
//
//	NB nb;
//	nb.publ;
//
//	NC nc;
//	nc.publ;
//
//	ND nd;
//	nd.publ;
//
//
//	
//}
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
void F9() {
	std::cout << "������� � ���������� 9 �����: ";
	std::cin >> Num;
	char str1[] = "������ ����� ������";
	char* str2 = str1;
	switch (Num)
	{
	case 1:

		std::cout << str1 << std::endl;
		std::cout << str2 << std::endl;
		str2++;
		std::cout << str2 << std::endl;
		f9_1();
		break;

	default:
		break;
	}
}