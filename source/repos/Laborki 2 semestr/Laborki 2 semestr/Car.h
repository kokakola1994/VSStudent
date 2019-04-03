#pragma once
#include <iostream>
#pragma once;


using namespace std;

class Car
{
	char *Name;
	int Age;
public:
	Car();
	~Car();
	void Print() const;
	Car(const char*Name, int Age);

	void SetName(const char*Name)
	{
		this->Name = new char[strlen(Name) + 1];
		strcpy(this->Name, Name);
	}
	void SetAge(int Age)
	{
		this->Age = Age;
	}
	//konstruktor copy
	Car(const Car&);

	//operator copy
	const Car& operator = (const Car&);

};

