#pragma once
#include "B.h"
class D :
	public B
{
public:
	D() { f2(); };
	virtual void f3() { cout << "f3 D" << endl; };
};

