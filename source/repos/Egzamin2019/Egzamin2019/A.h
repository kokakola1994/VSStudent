#pragma once
#include "Bazowa.h"
class A :
	public Bazowa
{
public:
	A() { f1(); };
	void f1() { cout << "f1 A" << endl; }
	virtual void f2() { cout << "f2 A" << endl; };
};

