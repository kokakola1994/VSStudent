// Laborka 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Ulamek.h"
#include <algorithm>
#include <numeric>
#include <functional>
#include <vector>

using namespace std;

typedef vector<Ulamek> UVector;
UVector make_vector(int n) {
	UVector d(n);
	for (int i = 0; i < n; i++)
	{
		cin >> d[i];
	}
	return d;
}
void print_vector(const UVector& t)
{
	for (auto const& x : t)
	{
		cout << x;
	}
}
template <class T>
class Great_val
{
	T val;
public:
	Great_val(const T& t) : val(t){}
	bool operator()(const T& t)
	{
		return t > val;
	}
};
Ulamek sred(const UVector& t)
{
	Ulamek tmp(0, 1);
}
template <class T>
class Less_abs
{
public:
	bool operator()(const T& t1, const T& t2)
	{
		return abs((double)t1) < abs((double)t2);
	}
};
template <class T>
class del
{
	T val;
public:

};

int main()
{
	int n;
	cout << "Wprowadz n: ";
	cin >> n;
	UVector t = make_vector(n);
	print_vector(t);
	Ulamek sum = accumulate(t.begin(), t.end(), Ulamek(0, 1), std::plus<Ulamek>());
	Ulamek srd = sum / (int)t.size();
	cout << srd << endl;
	UVector::const_iterator it = max_element(t.begin(), t.end());
	cout << "Max =" << *it;
	Ulamek tmp1 = *it;
	cout << "Po wymianie : " << endl;
	replace_if(t.begin(), t.end(), Great_val <Ulamek>(srd), Ulamek(tmp1));
	print_vector(t);
	cout << "Sortowanie rosnaco :" << endl;
	sort(t.begin(), t.end());
	print_vector(t);
	cout << "sortowanie malenco : " << endl;
	sort(t.begin(), t.end(), std::greater<Ulamek>());
	print_vector(t);
	cout << "Sortowanie za rosnanca wartoscia bezwgledna: " << endl;
	sort(t.begin(), t.end(), Less_abs<Ulamek>());
	print_vector(t);
	cout << "Szukanie" << endl;
	cin >> tmp1;
	it = find_if(t.begin(), t.end(), bind2nd(std::equal_to<Ulamek>(), tmp1));
	if (it != t.end()) cout << " Element znalezono" << endl;
	else cout << " Element nie znalezono" << endl; 
	cout << "USUNIENCIE: " << endl;
	it = min_element(t.begin(), t.end());
	Ulamek tmp2 = *it;
	it = remove_if(t.begin(), t.end(), bind2nd(std::equal_to<Ulamek>(), tmp2));
	it.erase(it, t.end())
		print_vector(t);
	//Ulamek a(1, 2), b(1, 2), c(5,6);
	//cin >> b;
	//a += b;
	//cout << a;
	//cout <<- a;
	//if (a == c)	cout << "rowne" << endl;
	//else cout << "nie równe"<< endl;
	////a.Print();
	////cout << endl;
	////b.Print();
	////cout << endl;
	////c = a + b;
	////a += b;
	////c = Dodaj(a, b);
	////c.Print();
	//
	//cout << endl;
	///*Ulamek rez = Mnog(a,b)*/


	///*Ulamek a(1, 15), c(2, 2);
	//Ulamek b;
	//cin >> b;
	//cout << a + b;
	//cout << a - b;
	//cout << a * b;
	//cout << a / b;
	//cout << a += b;
	//cout << a -= b;
	//cout << a *= b;
	//cout << a /= b;*/

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
