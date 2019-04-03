#pragma once
#include "Country.h"
using namespace std;

class Region :
	public Country
{
	char *Name;
	int Index;
public:
	Region();
	Region(const char *Name, int Index, char *Country)
	{
		this->Name = new char[strlen(Name) + 1];
		strcpy(this->Name, Name);

		this->Index =Index;

		this->Name = new char[strlen(Country) + 1];
		strcpy(this->Name, Country);
	}

	Region(const Region&);
	const Region& operator = (const Region&);

	void SetName(char *Name)
	{
		this->Name = new char[strlen(Name) + 1];
		strcpy(this->Name, Name);
	}
	char * GetName()	
	{
		return Name;
	}
	void SetIndex(int)
	{
		this->Index = Index;
	}
	void Print()
	{

	}
	void Input()
	{

	}
	~Region();
};

