#pragma once
#include "Quadrangle.h"
class Diamond :
	public Quadrangle
{
public:
	Diamond(double ix, double iy) : Quadrangle(ix, iy) {}
	~Diamond() { cout << "Deleting diamond:  " << endl; }
	void print() { cout << "A diamond with diagonal: " << x << " and " << y << endl; }
	void area() { cout << "has an area off: " << 0.5*y*x << endl; }
	void obwod() { cout << "has a perimetr off:  " << ((x+y)/(x+y))*2 << endl; }
};

