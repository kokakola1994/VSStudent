#include "pch.h"
#include "Region.h"
#include <iostream>
using namespace std;


Region::Region()
{
	cout << "Sasex" << endl;
	this->Name = new char[strlen("Sasex") + 1];
	strcpy(this->Name, "Sasex");
	Index = 1;
}

Region::Region(const Region&a)
{
	cout << "Copy Region";
	SetName(a.Name);
	SetIndex(a.Index);
}

const Region & Region::operator=(const Region &a)
{
	delete[] Name;
	SetName(a.Name);
	SetIndex(a.Index);
	return*this;
}

Region::~Region()
{
};
