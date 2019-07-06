#pragma once
#include "Bazowa.h"
class C :
	private Bazowa
{
public:
	C() { f1(); };
	void f1() { cout << "f1 C" << endl; };
	void f2() { cout << "f2 C" << endl; };
};

