#pragma once
#include "Quadrangle.h"

class Rectangle :
	public Quadrangle
{
public:
	Rectangle(double ix, double iy) : Quadrangle(ix, iy) {}
	~Rectangle() { cout << "Deleting rectangle " << endl; }
	void print() { cout << "A rectangle with sides: " << x << " and " << y << endl; }
	void area() { cout << "has an area off: " << x * y << endl; }
	void obwod() { cout << "has a perimetr of:  " << 2 * (x + y) << endl; }
};

