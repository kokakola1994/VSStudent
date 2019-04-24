#pragma once
#include <iostream>
#include <windows.h>

using namespace std;
class Shape
{
protected:
	static int count;
	Shape() { count++; };
	//double x, y;
public:
	//Shape(double ix = 0, double iy = 0) {x = ix; y = iy; }
	virtual ~Shape() { count--; }
	virtual int Getcount() { return count; }
	virtual void Draw(HWND &hwnd, HDC &hdc) = 0;
	//{cout << "Deleting Shape..." << endl; }
	//virtual void area() = 0;
	//virtual void obwod() = 0;
	//virtual void print() = 0;

};

