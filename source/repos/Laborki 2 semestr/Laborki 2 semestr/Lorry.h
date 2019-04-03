#pragma once
#include "Car.h"
#include <iostream>

using namespace std;

class Lorry :
	public Car
{
	char *Wlascicel;

public:
	Lorry();

	char *getWlascicel(void)
	{
		return Wlascicel;
}

void setWlascicel(const char* w) 
{
	this->Wlascicel = new char[strlen(w) + 1];
	strcpy(this->Wlascicel);
}
	void Print() const;
	Lorry(const char*, int, const char*);
	Lorry(const Lorry&);
	const Lorry& operator  (const Lorry&a);
	~Lorry();
};

