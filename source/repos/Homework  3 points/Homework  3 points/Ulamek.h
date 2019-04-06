#pragma once
#pragma once
#include <iostream>

using namespace std;

class Ulamek

{
	int licz;
	int mian;
	void reduc();
public:
	Ulamek();
	Ulamek(int, int);
	//explicit Ulamek(int = 1, int = 1);
	void Print() const;

	int getlicz() const { return licz; };
	int getmian() const { return mian; };
	void setlicz(int a) { licz = a; };
	void setmian(int b) { if (b == 0) b = 1; mian = b; };

	friend Ulamek Dodaj(const Ulamek&, const Ulamek&);
	friend Ulamek operator+(const Ulamek&, const Ulamek&);
	friend Ulamek operator*(const Ulamek&, const Ulamek&);
	friend Ulamek operator/(const Ulamek&, const Ulamek&);
	Ulamek& Dodaj(const Ulamek&);
	Ulamek& operator+=(const Ulamek&);
	Ulamek& operator-=(const Ulamek&); //доробити оператора
	Ulamek& operator/=(const Ulamek&);
	Ulamek& operator*=(const Ulamek&);

	friend ostream &operator <<(ostream &stream, const Ulamek &b);
	friend istream &operator >>(istream &stream, Ulamek &b);
	friend bool operator == (const Ulamek &f, const Ulamek &t);
	friend bool operator != (const Ulamek &f, const Ulamek &t);
	friend bool operator <= (const Ulamek &f, const Ulamek &t);//pereviryty operatora
	friend bool operator > (const Ulamek &f, const Ulamek &t); //pereviryty operatora 
	friend bool operator >= (const Ulamek &f, const Ulamek &t); //pereviryty operatora
	friend bool operator < (const Ulamek &f, const Ulamek &t); //pereviryty operatora
	Ulamek operator-() const;
	Ulamek& operator++ (void); //не знаю що робити з цим оператором
	Ulamek& operator++ (int); //доробити оператора
	Ulamek& operator-- (void); // доробити оператора
	Ulamek& operator-- (int); // доробити оператора
	
	//explicit operator double() { return (double)licz / mian; }
	//explicit operator int() { return licz / mian; }

	~Ulamek();
};
