// Egzamin2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "A.h"
#include "B.h"
#include "Bazowa.h"
#include "C.h"
#include "D.h"
#include "A2.h"
#include <vector>
using namespace std;
class A1
{
public:
	A1() { cout << '1'; }
	~A1() { cout << '0'; }
};
class A3
{
public:
	virtual void fun() { cout << " A "; }
};
class B1 : public A3
{
public:
	void fun() { cout << " B "; A:fun(); }	
};
template <typename Type, int rozmiar= 10>
class Stos
{
	Type rep[rozmiar];
	int top;
public:
	Stos() { top = 0; };
	bool isempty() { return top == 0; }
	bool isfull() { return top == rozmiar; }
	bool push(const Type& item)
	{
		if (top < rozmiar)
		{
			rep[top++] = item;
			return true;
		}
		else return false;
	}
	bool pop(Type& item)
	{
		if (top > 0)
		{
			item = rep[--top];
			return true;
		}
		else return false;
	}
};
int main()
{
	vector <string> k;
	k.push_back("alfa");
	k.push_back("beta");
	k.push_back("gamma");
	k.push_back("delta");
	for (int i = 0; i < k.size(); i++)
		cout << k[i] << endl;
	/*cout << "1. ";
	D d;
	cout << endl;
	cout << "2. ";
	B* b = new B; 
	b->f2();
	cout << endl;
	cout << "3. ";
	C c;
	c.f2();
	cout << endl;*/
	/*cout << "4. ";
	B b;
	B &c = b;
	A &d = c;
	b.f2();
	c.f2();
	d.f2();
	cout << endl;*/
	/*cout << "5. ";
	D *d = new D;
	Bazowa *bazowa = d;
	bazowa->f2();
	cout << endl;
	cout << "6. ";
	for (int i = 0; i < 2; i++) A1 a1, b1, c1;
	cout << endl;*/
	/*cout << "8. ";
	Stos<int, 5> s, t; int k;
	for (int i = 0; i < 5; i++) s.push(i);
	t = s; t.push(5); s.pop(k);
	cout << k << endl;
	cout << endl;*/
	/*cout << "9. ";
	int k;
	Stos <int, 10> s, t;
	s.push(1); s.push(2); s.push(3);
	t = s; t.pop(k); cout << k << endl;
	t.push(7);
	s = t; s.pop(k); cout << k << endl;
	cout << endl;*/
	/*cout << "10. ";
	A3* wsk = new B1;
	wsk->fun();*/


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
