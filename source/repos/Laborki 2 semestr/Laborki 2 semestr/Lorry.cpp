#include "pch.h"
#include "Lorry.h"


lorry::lorry() :Car() {
	cout << "Constr lor.. " << endl;
	setWlascicel("Kowalski");
}



lorry::~lorry() {
	cout << "Destruct lorry ... " << endl;
	delete[] Wlascicel;
}

void lorry::Print() const {
	Car::Print();
	cout << " " << Wlascicel << endl;
}

lorry::lorry(const char *Name, int Age, const char *Wlascicel) :Car(Name, Age) {
	cout << "Construktor z arg larry... " << endl;
	setWlascicel(Wlascicel);

}
lorry::lorry(const lorry& a) : Car() {
	cout << " " << endl;
	setWlascicel(a.Wlascicel);
}

const lorry& lorry::operator = (const lorry &a) {
	cout << "Operator cope lorr ... " << endl;
	delete[] Wlascicel;
	Car::operator= (a);
	setWlascicel(a.Wlascicel);
	return *this;
}
void lorry::Input() {
	Car::Input();
	delete[] Wlascicel;
	cout << "Wlascicel: ";
	char buf[125];
	cin >> buf;
	setWlascicel(buf);
}
