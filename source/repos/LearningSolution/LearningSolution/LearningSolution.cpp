// LearningSolution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Bazowa {
public:
	Bazowa() { f1(); };
	virtual void f1() { cout << "f1 bazowa" << endl; };
	void f2() { cout << "f2 bazowa" << endl; };
};
class A : public Bazowa {
public:
	A() { f1(); }
	void f1() { cout << "f1 A" << endl; };
	virtual void f2() { cout << "f2 A" << endl; };
};
class B : public A {
public:
	B() { f1(); };
	void f1() { cout << "f1 B" << endl; };
	void f2() { cout << "f2 B" << endl; };
};
class C : private Bazowa {
public:
	C() { f1(); };
	void f1() { cout << "f1 C" << endl; };
	void f2() { cout << "f2 C" << endl; };
};
class D :public B {
public:
	D() { f2(); };
	virtual void f3() { cout << "f3 D" << endl; }
};
int main()
 {
	C c;
	c.f2();
	for (int i = 1; i <= 10; i++)
		
	{
			for (int j = 9; j >= i; j--)
			{
				cout << " ";
			}
			for (int k = 1; k <= (2 * i - 1); k++)
			{
				cout << " * ";
			}
		cout << endl;
	}
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
