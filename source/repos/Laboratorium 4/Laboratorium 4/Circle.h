#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
protected:
	int cx, cy, radius;
public:
	Circle(int x = 0; int y = 0;; int r = 0);
	~Circle() {};
	void Draw(HWND)
//public:
	//Circle(double ix) : Shape(ix, 0) {}
	//~Circle() { cout << "Deleting sircle" << x << endl; }
	//void print() { cout << "circle with radius" << x << endl; }
	//void area() {
		//cout << "has an area of " << 3.14159*x*x << endl;
	//}
	//void obwod() {
		//cout << "has a perimetr of" << 2 * 3.14159*x << endl;
	//}
};
