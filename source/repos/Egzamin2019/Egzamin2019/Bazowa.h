#pragma once
#include <iostream>
using namespace std;
class Bazowa
{
public:
	Bazowa() { f1(); };
	virtual void f1() { cout << "f1 bazowa" << endl; };
	void f2() { cout << "f2 bazowa" << endl; }
};

