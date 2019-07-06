#pragma once
#include "A.h"
class B :
	public A
{
public:
	void fun() { cout << " B "; A:fun(); }
};

