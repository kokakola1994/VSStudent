#pragma once
#include "Country.h"
using namespace std;

class Region : Country
{
	char*Name;

public:
	Region();
	char* GetName(void)	{return Name;}
	void SetName(const char *Name)
	{
		this->Name = new char[strlen(Name) + 1];
		strcpy(this->Name, Name);
	}
	void Print();
	void Input();
	Region(const char*, int ,const char*);
	Region(const Region&);
	const Region& operator = (const Region&);

	~Region();
};

