#pragma once
#include <iostream>
using namespace std;

class Quadrangle
{
protected:
	double x, y;
public:
	Quadrangle(double ix = 0, double iy = 0) {
		x = ix; y = iy;
	}
	virtual ~Quadrangle()
	{cout << "Deleting Shape..." << endl; }
	virtual void area() = 0;
	virtual void obwod() = 0;
	virtual void print() = 0;

};

