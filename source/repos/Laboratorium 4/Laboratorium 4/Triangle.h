#pragma once
#include "Shape.h"

#include <iostream>
class Triangle : public Shape

	class Triangle : public Shapes

{

protected:

	int x1, y1, x2, y2, x3, y3;

public:

	Triangle(int x1 = 0, int y1 = 0, int x2 = 100, int y2 = 100, int x3 = 150, int y3 = 0);

	~Triangle() { }

	void Draw(HWND &hwnd, HDC &hdc);

};
/*{
protected:
	double z;
public:
	Triangle(double ix, double iy, double iz = 0) : Shape(ix, iy) {z = iz;}
	~Triangle() { cout << "Deleting triangle" << endl; }
	void print() { cout << "A triangle with sides" << x << " and " << y << "and" << z << endl; }
	void area() {double p_2 = 0.5 * (x + y + z);
	double s = sqrt(p_2 * fabs(p_2 - x)*fabs(p_2 - y)* fabs(p_2 - z));
		cout << "has an area off" << s << endl;
	}
		void obwod() { cout << "has a perimetr of " << x + y + z << endl; }
	
};*/

