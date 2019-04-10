// Homework  3 points.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "pch.h"
#include <iostream>
#include "Ulamek.h"

using namespace std;

int main()
{
	Ulamek a(1, 2), b(1, 2), c(1,2);
	cin >> a;
	cin >> b;
	c = a + b;
	c = a - b;
	c = a * b;
	c = a / b;
	a += b;
	cout << "+=\n" << a;
	a -= b;
	cout << "-=\n" << a;
	a *= b;
	cout << "*=\n" << a ;
	a /= b;
	cout << "/\n" << a;
	if (a == b)	cout << "rowne" << endl;
	else cout << "nie równe" << endl;
	if (a != b)	cout << "rowne" << endl;
	else cout << "nie równe" << endl;
	if (a <= c)	cout << "rowne" << endl;
	else cout << "nie równe" << endl;
	if (a > c)	cout << "rowne" << endl;
	else cout << "nie równe" << endl;
	if (a >= c)	cout << "rowne" << endl;
	else cout << "nie równe" << endl;
	if (a < c)	cout << "rowne" << endl;
	else cout << "nie równe" << endl;
	cout << -a;
	cout << a;
	cout << "increment\n" << a++;
	cout << "decrement\n" << a--;
	cout << ++a;
	cout << --a;
	c = ++a;
	c = --a;
	cout << c;
	Ulamek rez = (a, b);
	cout << rez;
	a.Print();
	b.Print();
	c.Print();
	
	
	//Ulamek a(1, 2), b(1, 2), c(5, 6);
	//cin >> b;
	//a += b;
	//cout << a;
	//cout << -a;
	//if (a == c)	cout << "rowne" << endl;
	//else cout << "nie równe" << endl;
	//a.Print();
	//cout << endl;
	//b.Print();
	//cout << endl;
	//c = a + b;
	//a += b;
	//c = Dodaj(a, b);
	//c.Print();

	//cout << endl;
	//Ulamek rez = (a, b);


	//Ulamek d(1, 2), e(2, 2);
	//Ulamek f;
	//cin >> f;
	//cout << d + f;
	//cout << a - b;
	//cout << d * f;
	//cout << d / f;
	//cout << a += b;
	//cout << a -= b;
	//cout << a *= b;
	//cout << a /= b;
	system("pause");
	return 0;

	/*Ulamek a(1, 15), c(2, 2);
	Ulamek b;
	cin >> b;
	cout << a + b;
	cout << a - b;
	cout << a * b;
	cout << a / b;
	cout << a += b;
	cout << a -= b;
	cout << a *= b;
	cout << a /= b;*/
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
