#pragma once
#include "Car.h"
#include <iostream>

using namespace std;

class lorry :
	public Car
{
	char *Wlascicel;
public:
	lorry();

	char * getWlascicel(void) { return Wlascicel; }

	void setWlascicel(const char* w) {
		this->Wlascicel = new char[strlen(w) + 1];
		strcpy(this->Wlascicel, w);
	}
	void Print() const;

	void Input();

	~lorry();

	lorry(const char*, const int, const char*);


	lorry(const lorry&);
	const lorry& operator = (const lorry &);
};


