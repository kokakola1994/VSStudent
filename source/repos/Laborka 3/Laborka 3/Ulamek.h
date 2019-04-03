#pragma once
#include <iostream>
# pragma one

using namespace std;

class Ulamek
	
{
	int licz;
	int mian;
	void reduc();
public:
	Ulamek();
	Ulamek(int, int);
	void Print() const;
	int getlicz() const { return licz; };
	int getmian() const { return mian; };
	void setlicz(int a) { licz = a; };
	void setmian(int b) { if (b == 0) b = 1; mian = b; };
	friend Ulamek Dodaj (const Ulamek&, const Ulamek&);
	friend Ulamek operator+(const Ulamek&, const Ulamek&);
	Ulamek& Dodaj(const Ulamek&);
	Ulamek& operator+=(const Ulamek&);
	friend ostream &operator <<(ostream &stream, const Ulamek &b);
	friend istream &operator >>(istream &stream, Ulamek &b);
	friend bool operator == (const Ulamek &f, const Ulamek &t);
	friend bool operator != (const Ulamek &f, const Ulamek &t);
	Ulamek operator-() const;
	//const Ulamek& Dodaj(const Ulamek&) const;

	~Ulamek();
};

