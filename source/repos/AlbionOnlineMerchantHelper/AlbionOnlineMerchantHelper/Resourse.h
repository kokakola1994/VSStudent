#pragma once
#include <iostream>
using namespace std;

class Resourse
{
public:
	Resourse(){	};
	virtual void name() = 0;
	virtual float price() = 0;
	virtual int amount() = 0;
	virtual ~Resourse() {};
};

