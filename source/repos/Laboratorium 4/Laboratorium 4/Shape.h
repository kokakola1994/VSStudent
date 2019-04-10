#pragma once
#include <iostream>

using namespace std;
class Shape
{
protected:
	double x, y;
public:
	Shape(double ix = 0, double iy = 0) {x = ix; y = iy; }
	virtual ~Shape()
	{cout << "Deleting Shape..." << endl; }
	virtual void area() = 0;
	virtual void obwod() = 0;
	virtual void print() = 0;

};

