#pragma once
#include <iostream>
# pragma one

using namespace std;

class Ulamek
	
{
	int licz, mian;
	void reduce();
public:
	Ulamek();
	Ulamek(int, int);
	void print() const;
	int getLicz() const {
		return licz;
	}
	int getMian() const {
		return mian;
	}
	void setLicz(int a) {
		licz = a;
	}
	void setMian(int b) {
		if (b == 0) b = 1;
		mian = b;
	}
	friend Ulamek Dodaj(const Ulamek&, const Ulamek&);
	friend Ulamek operator+(const Ulamek&, const Ulamek&);
	friend Ulamek operator-(const Ulamek&, const Ulamek&);
	friend Ulamek operator*(const Ulamek&, const Ulamek&);
	friend Ulamek operator/(const Ulamek&, const Ulamek&);
	Ulamek& Dodaj(const Ulamek&);
	Ulamek& operator+=(const Ulamek&);
	Ulamek& operator-=(const Ulamek&);
	Ulamek& operator*=(const Ulamek&);
	Ulamek& operator/=(const Ulamek&);
	friend std::ostream& operator << (std::ostream & stream, const Ulamek & b);
	friend std::istream& operator >> (std::istream & stream, Ulamek & b);
	Ulamek operator-() const;
	Ulamek& operator++ (void);
	Ulamek& operator++ (int);
	Ulamek& operator-- (void);
	Ulamek& operator-- (int);
	friend bool operator == (const Ulamek & f, const Ulamek & t);
	friend bool operator != (const Ulamek & f, const Ulamek & t);
	friend bool operator <= (const Ulamek & f, const Ulamek & t);
	friend bool operator > (const Ulamek & f, const Ulamek & t);
	friend bool operator >= (const Ulamek & f, const Ulamek & t);
	friend bool operator < (const Ulamek & f, const Ulamek & t);
	explicit operator double() { return (double)licz / mian; }
	explicit operator int() { return licz / mian; }
	~Ulamek();
};
