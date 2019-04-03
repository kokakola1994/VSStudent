#include "pch.h"
#include "Car.h"



Car::Car()
{

	cout << "Constructor domyslowy car..." << endl;
	this->Name = new char[strlen("BMW") + 1];
	strcpy(this->Name, "BMW");
	Age = 10;
}
Car::~Car()
{
	cout << "Destructor car..." << endl;
}
void Car::Print() const
{
}
Car::Car(const char * Name, int Age) {
	cout << "Construktor z argumentami" << endl;
	SetName(Name);
	SetAge(Age);
}
Car::Car(const Car&a)
{
	cout << "Constructor copy car..." << endl;
SetName(a.Name);
SetAge(a.Age);
}
const Car& Car::operator = (const Car &a)
{
	cout << "Operator copy car..." << endl;
	delete[] Name;
	SetName(a.Name);
	SetAge(a.Age);
	return*this;
}

