#include "pch.h"
#include "fraction.h"
#include <iostream>
#include <string>
#include <numeric>

#include "fraction.h"

using std::string;
using namespace std;

fraction::fraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
	reduire();
}

int pgcd(int a, int b)
{
	if (a == 0)
	{
		return b;
	}
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return a;
}

void fraction::reduire()
{
	//int r = std::gcd(this->numerator, this->denominator);
	int r = pgcd(this->numerator, this->denominator);
	this->numerator = this->numerator / r;
	this->denominator = this->denominator / r;
}

fraction fraction::operator*(const fraction& fraction) const
{
	int num = this->numerator * fraction.numerator;
	int den = this->denominator * fraction.denominator;
	fraction result(num, den);
	result.reduire();
	return result;
}

fraction fraction::operator/(const fraction& fraction) const
{
	int num = this->numerator * (fraction.denominator);
	int den = this->denominator * (fraction.numerator);
	fraction result(num, den);
	result.reduire();
	return result;
}

fraction fraction::operator+(const fraction& fraction) const
{
	int num1 = this->numerator * fraction.denominator;
	int den1 = this->denominator * fraction.denominator;
	int num2 = fraction.numerator * this->denominator;
	fraction result(num1 + num2, den1);
	result.reduire();
	return result;
}

fraction fraction::operator-(const fraction& fraction) const
{
	int num1 = this->numerator * fraction.denominator;
	int den1 = this->denominator * fraction.denominator;
	int num2 = fraction.numerator * this->denominator;
	fraction result(num1 - num2, den1);
	result.reduire();
	return result;
}



fraction fraction::operator*=(const fraction& fraction)
{
	this->numerator = this->numerator * fraction.numerator;
	this->denominator = this->denominator * fraction.denominator;
	fraction result(this->numerator, this->denominator);
	result.reduire();
	return result;
}

fraction fraction::operator/=(const fraction& fraction)
{
	this->numerator = this->numerator * (fraction.denominator);
	this->denominator = this->denominator * (fraction.numerator);
	fraction result(this->numerator, this->denominator);
	result.reduire();
	return result;
}

fraction fraction::operator+=(const fraction& fraction)
{
	int num = fraction.numerator * this->denominator;
	this->numerator = this->numerator * fraction.denominator;
	this->denominator = this->denominator * fraction.denominator;
	this->numerator = this->numerator + num;
	fraction result(this->numerator, this->denominator);
	result.reduire();
	return result;
}

fraction fraction::operator-=(const fraction& fraction)
{
	int num = fraction.numerator * this->denominator;
	this->numerator = this->numerator * fraction.denominator;
	this->denominator = this->denominator * fraction.denominator;
	this->numerator = this->numerator - num;
	fraction result(this->numerator, this->denominator);
	result.reduire();
	return result;
}



bool fraction::operator==(const fraction& fraction) const
{
	if (this->numerator == fraction.numerator && this->denominator == fraction.denominator)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool fraction::operator!=(const fraction& fraction) const
{
	return !(*this == fraction);
}

bool fraction::operator<(const fraction& fraction) const
{
	int num1 = this->numerator * fraction.denominator;
	int num2 = fraction.numerator * this->denominator;
	if (num1 < num2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool fraction::operator<=(const fraction& fraction) const
{
	return (*this < fraction || *this == fraction);
}

bool fraction::operator>(const fraction& fraction) const
{
	return !(*this <= fraction);
}

bool fraction::operator>=(const fraction& fraction) const
{
	return !(*this < fraction);
}



fraction fraction::operator++()
{
	return (*this += fraction(1, 1));
}

fraction fraction::operator++(int)
{
	fraction truc = *this;
	*this += fraction(1, 1);
	return truc;
}

fraction fraction::operator--()
{
	return (*this -= fraction(1, 1));
}

fraction fraction::operator--(int)
{
	fraction truc = *this;
	*this -= fraction(1, 1);
	return truc;
}



std::ostream& operator<<(ostream& o, const fraction& fraction)
{
	o << fraction.numerator << "/" << fraction.denominator;
	return o;
}

istream& operator>>(istream& i, fraction& fraction)
{
	int a, b;
	char c;
	i >> a >> c >> b;
	if (c == '/')
	{
		fraction = fraction(a, b);
	}
	return i;
	cout << a << endl;
}

