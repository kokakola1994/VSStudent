#pragma once
#include <iostream>

using namespace std;

class Country
{
	char *Title;
	int People;
public:
	Country();
	Country(const char*, int);
	Country(const Country&);
	const Country& operator = (const Country&);

	void SetTitle(const char *Title)
	{
		this->Title = new char[strlen(Title) + 1];
		strcpy(this->Title, Title);
	}

	char * GetTitle()
	{
		return Title;
	}

	void SetPeople(int People)
	{
		this->People = People;
	}

	int  GetPeople()
	{
		return People;
	}

	void Print();

	void Input();

	~Country();
};