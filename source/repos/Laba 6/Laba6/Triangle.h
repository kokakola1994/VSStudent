#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
protected:
	int x1, y1, x2, y2, x3, y3;
public:
	Triangle(int x1 = 0, int y1 = 0, int x2 = 100, int y2 = 100, int x3 = 150, int y3 = 150);
	~Triangle() {};
	void Draw(HWND &hwnd, HDC &hdc);
};

