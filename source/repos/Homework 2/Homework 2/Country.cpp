#include "pch.h"
#include "Country.h"
using namespace std;



Country::Country()
{
	cout << "England" << endl;
	this->Title = new char[strlen("England") + 1];
	strcpy(this->Title, "England");
	People = 80;
}

Country::Country(const char*Title, int People)
{
	cout << "Construktor" << endl;
	SetTitle(Title);
	SetPeople(People);
}

Country::Country(const Country &a)
{
	cout << "Copy Country";
	SetTitle(a.Title);
	SetPeople(a.People);
}

const Country & Country::operator=(const Country &a)
{
	delete[] Title;
	SetTitle(a.Title);
	SetPeople(a.People);
	return*this;
}

void Country::Print()
{
	cout << Title << "\n" << People << endl;
}

void Country::Input()
{
}

Country::~Country()
{
	cout << "Delete Title"<< endl;
}

