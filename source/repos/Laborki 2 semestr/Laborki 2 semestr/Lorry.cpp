#include "pch.h"
#include "Lorry.h"


Lorry::Lorry()
{

}

void Lorry::Wlascicel()
{
	cout << "Constructor domyslowy lorry..." << endl;
	setWlascicel("Kowalski");
}


Lorry::Lorry (const char*Name, int Age, const char Wlascicel) : Car(Name, Age)
{
	cout << "Construktor z argumentami Lorry..." << endl;
	setWlascicel(Wlascicel);
}


Lorry::~Lorry()
{
	cout << "Destruct Lorry" << endl;
	delete[]Wlascicel;
}


void Lorry::Print() const
{
	Car::Print();
	cout << " " << Wlascicel << endl;
}

Lorry::Lorry(const char *, int, const char *)
{
}

Lorry::Lorry(const Lorry& a) : Car(a)
{
	cout << "Constructor copy Lorry..." << endl;
	setWlascicel(a.Wlascicel);
}

const Lorry&operator= (const Lorry &a)
{
	cout << "Operator copy Lorry..." << endl;
	delete[]Wlascicel;
	Car::operator= (a);
	setWlascicel(a.Wlascicel);
	return this;
}
