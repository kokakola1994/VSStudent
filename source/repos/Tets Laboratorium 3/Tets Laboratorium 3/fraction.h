#pragma once
#include <iostream>
using namespace std;
class fraction
{
public:
		int numerator;
		int denominator;

	public:
		fraction(int numerator, int denominator);

		void reduire();

		fraction operator*(const fraction& fraction) const;
		fraction operator/(const fraction& fraction) const;
		fraction operator+(const fraction& fraction) const;
		fraction operator-(const fraction& fraction) const;

		fraction operator*=(const fraction& fraction);
		fraction operator/=(const fraction& fraction);
		fraction operator+=(const fraction& fraction);
		fraction operator-=(const fraction& fraction);

		bool operator==(const fraction& fraction) const;
		bool operator!=(const fraction& fraction) const;
		bool operator<(const fraction& fraction) const;
		bool operator<=(const fraction& fraction) const;
		bool operator>(const fraction& fraction) const;
		bool operator>=(const fraction& fraction) const;

		fraction operator++();
		fraction operator++(int);
		fraction operator--();
		fraction operator--(int);

		friend std::ostream& operator<<(std::ostream& o, const fraction& fraction);
		friend std::istream& operator>>(std::istream&i, fraction& fraction);
	};

	int pgcd(int a, int b);
	ostream& operator<<(std::ostream& o, const fraction& fraction);
	istream& operator>>(std::istream& i, fraction& fraction);
};

