#pragma once
#include <iostream>
using namespace std;
class A2
{
public:
	A2() { cout << 'T'; }
	A2(const A2& a2) { cout << 'K'; }
	void f1(A2 a2) {};
	void f2(const A2 a2) {};
};

