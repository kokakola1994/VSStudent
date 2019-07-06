#pragma once
#include "A.h"
class B :
	public A
{
public:
	B() { f1(); };
	void f1() { cout << "f1 B" << endl; };
	void f2() { cout << "f2 B" << endl; };
};

