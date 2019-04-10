#include "pch.h"
#include "Ulamek.h"
#define min(a,b) (a<b ? a:b)

void Ulamek::reduc()
{
	for (int i = 2; i <= min(licz, mian); i++)
	{
		if (licz % i == 0 && mian % i == 0)
		{
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

Ulamek::Ulamek(int a, int b)
{
	licz = a;
	setmian(b);
	reduc();
}

void Ulamek::Print() const
{
	cout << licz << "/" << mian << endl;
}
/*Ulamek Dodaj(const Ulamek& a, const Ulamek& b) {
	Ulamek c;
	c.licz = a.licz*b.mian + a.mian*b.licz;
	c.mian = a.mian * b.mian;
	c.reduc();
	return c;
}*/

Ulamek operator+(const Ulamek& a, const Ulamek& b) {

	Ulamek c;
	c.licz = a.licz*b.mian + a.mian*b.licz;
	c.mian = a.mian * b.mian;
	c.reduc();
	return c;
}
Ulamek operator*(const Ulamek &a, const Ulamek &b)
{
	Ulamek c;
	c.licz = a.licz*b.licz;
	c.mian = a.mian * b.mian;
	c.reduc();
	return c;
}
Ulamek operator/(const Ulamek &a, const Ulamek &b)
{
	Ulamek c;
	c.licz = a.licz*b.mian;
	c.mian = a.mian * b.licz;
	c.reduc();
	return c;
}
Ulamek operator-(const Ulamek &a, const Ulamek &b)
{
	Ulamek c;
	c.licz = a.licz*b.mian - a.mian*b.licz;
	c.mian = a.mian * b.mian;
	c.reduc();
	return c;
}
ostream & operator<<(ostream & stream, const Ulamek & b)
{
	stream << b.licz << "/" << b.mian << endl;
	return stream;
}
istream & operator>>(istream & stream, Ulamek & b)
{
	stream >> b.licz >> b.mian;
	return stream;
}
bool operator==(const Ulamek & f, const Ulamek & t)
{
	if (f.licz*t.mian == f.mian*t.licz) return true;
	else return false;
}
bool operator!=(const Ulamek & f, const Ulamek & t)
{
	if (!(f == t)) return true;
	return false;
}
bool operator<=(const Ulamek & f, const Ulamek & t) 
{
	if (f.licz*t.mian <= f.mian*t.licz) return true;
	return false;
}

bool operator>(const Ulamek & f, const Ulamek & t) 
{
	if (f.licz*t.mian > f.mian*t.licz) return true;
	return false;
}

bool operator>=(const Ulamek & f, const Ulamek & t) 
{
	if (f.licz*t.mian >= f.mian*t.licz) return true;
	return false;
}

bool operator<(const Ulamek & f, const Ulamek & t) 
{
	if (f.licz*t.mian > f.mian*t.licz) return true;
	return false;
}

/*Ulamek& Ulamek::Dodaj(const Ulamek& b)
{
	this->licz = this->licz* b.mian + this->mian*b.licz;
	this->mian = this->mian*b.mian;
	this->reduc();
	return *this;
}*/
Ulamek& Ulamek::operator+=(const Ulamek& b)
{
	this->licz = this->licz* b.mian + this->mian*b.licz;
	this->mian = this->mian*b.mian;
	this->reduc();
	return *this;
}

Ulamek & Ulamek::operator-=(const Ulamek &b) 
{
	this->licz = this->licz* b.mian - this->mian*b.licz;
	this->mian = this->mian*b.mian;
	this->reduc();
	return *this;
}

Ulamek & Ulamek::operator/=(const Ulamek &b)
{
	this->licz = this->licz* b.mian;
	this->mian = this->mian*b.licz;
	this->reduc();
	return *this;

}

Ulamek & Ulamek::operator*=(const Ulamek &b)
{
	this->licz = this->licz* b.licz;
	this->mian = this->mian*b.mian;
	this->reduc();
	return *this;
}

Ulamek Ulamek::operator-() const
{
	Ulamek rez(-this->licz, this->mian);
	return rez;
}

Ulamek & Ulamek::operator++(void) //доробити оператора
{
	return (*this += Ulamek(1, 1));
}

Ulamek & Ulamek::operator++(int) 
{
	*this = *this + (Ulamek());
	return *this;
}

Ulamek & Ulamek::operator--(void) //доробити оператора
{
	return (*this -= Ulamek(1, 1));
}

Ulamek & Ulamek::operator--(int) 
{
	*this = *this - (Ulamek());
	return *this;
}

Ulamek::~Ulamek()
{
	//cout << "Destruktor..." << (*this);
}