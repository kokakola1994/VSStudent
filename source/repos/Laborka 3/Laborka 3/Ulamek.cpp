#include "pch.h"
#include "Ulamek.h"
#define min(a,b) (a<b ? a:b)

void Ulamek::reduce() {
	for (int i = 1; i <= min(licz, mian); i++) {
		if (licz % i == 0 && mian % i == 0) {
			licz /= i;
			mian /= i;
		}
	}
}


Ulamek::Ulamek()
{
	licz = 1;
	mian = 1;
}

Ulamek::Ulamek(int a, int b) {
	licz = a;
	setMian(b);
	reduce();
}

void Ulamek::print() const {
	std::cout << licz << "/" << mian;
}


Ulamek Dodaj(const Ulamek& a, const Ulamek& b) {
	Ulamek c;
	c.licz = a.licz * b.mian + a.mian * b.licz;
	c.mian = a.mian * b.mian;
	c.reduce();
	return c;
}

Ulamek operator+(const Ulamek& a, const Ulamek& b) {
	Ulamek c;
	c.licz = a.licz * b.mian + a.mian * b.licz;
	c.mian = a.mian * b.mian;
	c.reduce();
	return c;
}

Ulamek operator-(const Ulamek& a, const Ulamek& b) {
	Ulamek c;
	c.licz = a.licz * b.mian - a.mian * b.licz;
	c.mian = a.mian * b.mian;
	c.reduce();
	return c;
}

Ulamek operator*(const Ulamek& a, const Ulamek& b) {
	Ulamek c;
	c.licz = a.licz * b.licz;
	c.mian = a.mian * b.mian;
	c.reduce();
	return c;
}

Ulamek operator/(const Ulamek& a, const Ulamek& b) {
	Ulamek c;
	c.licz = a.licz * b.mian;
	c.mian = a.mian * b.licz;
	c.reduce();
	return c;
}

Ulamek& Ulamek::Dodaj(const Ulamek& b) {
	this->licz = this->licz * b.mian + this->mian * b.licz;
	this->mian = this->mian * b.mian;
	this->reduce();
	return *this;
}

Ulamek& Ulamek::operator+=(const Ulamek& b) {
	this->licz = this->licz * b.mian + this->mian * b.licz;
	this->mian = this->mian * b.mian;
	this->reduce();
	return *this;
}

Ulamek& Ulamek::operator-=(const Ulamek& b) {
	this->licz = this->licz * b.mian - this->mian * b.licz;
	this->mian = this->mian * b.mian;
	this->reduce();
	return *this;
}

Ulamek& Ulamek::operator*=(const Ulamek& b) {
	this->licz = this->licz * b.licz;
	this->mian = this->mian * b.mian;
	this->reduce();
	return *this;
}

Ulamek& Ulamek::operator/=(const Ulamek& b) {
	this->licz = this->licz * b.mian;
	this->mian = this->mian * b.licz;
	this->reduce();
	return *this;
}

Ulamek& Ulamek::operator++ (void) {
	this->licz = this->licz + this->mian;
	this->reduce();
	return *this;
}

Ulamek& Ulamek::operator++ (int) {
	this->licz = this->licz + this->mian;
	this->reduce();
	return *this;
}

Ulamek& Ulamek::operator-- (void) {
	this->licz = this->licz - this->mian;
	this->reduce();
	return *this;
}

Ulamek& Ulamek::operator-- (int) {
	this->licz = this->licz - this->mian;
	this->reduce();
	return *this;
}

std::ostream& operator << (std::ostream& stream, const Ulamek& b) {
	stream << b.licz << "/" << b.mian << "\n";
	return stream;
}

std::istream& operator >> (std::istream& stream, Ulamek& b) {
	stream >> b.licz >> b.mian;
	return stream;
}

bool operator == (const Ulamek& f, const Ulamek& t) {
	if (f.licz * t.mian == f.mian * t.licz) return true;
	else return false;
}

bool operator != (const Ulamek & f, const Ulamek & t) {
	if (!(f == t)) return true;
	else return false;
}

bool operator < (const Ulamek & f, const Ulamek & t) {
	if (f.licz * t.mian < t.licz * f.mian) return true;
	else return false;
}

bool operator > (const Ulamek & f, const Ulamek & t) {
	if (f.licz * t.mian > t.licz * f.mian) return true;
	else return false;
}

bool operator <= (const Ulamek & f, const Ulamek & t) {
	if (f > t) return false;
	else return true;
}

bool operator >= (const Ulamek & f, const Ulamek & t) {
	if (f < t) return false;
	else return true;
}

Ulamek Ulamek::operator-() const {
	Ulamek rez(-this->licz, this->mian);
	return rez;
}

Ulamek::~Ulamek()
{
	/*std::cout << " //Destruktor// ";*/
}
