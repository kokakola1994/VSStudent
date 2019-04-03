#include "pch.h"
#include "Region.h"
#include <iostream>
using namespace std;


Region::Region()
{
	cout << "Sussex" << endl;
	this->Name = new char[strlen("Sussex") + 1];
	strcpy(this->Name, "Sussex");
}

Region::Region(const char*Name, int People, const char*Title):Country (Title,People)
{
	SetName(Name);
}

Region::Region(const Region&a):Country()
{
	cout << "Copy Region"<<endl;
	SetName(a.Name);
}

const Region & Region::operator=(const Region &a)
{		
	cout << "Operator copy" << endl;
	delete[] Name;
	Country::operator=(a);
	SetName(a.Name);
	return*this;
}

void Region::Print() {
	Country::Print();
	cout << " " << Name << endl;
}

void Region::Input()
{
		char buf[25];
		cout << endl;
		cout << "Name of region: ";
		delete[] Name;
		cin >> buf;
}

Region::~Region()
{
	cout << "Destruct region" << endl;
	delete[]Name;
};
