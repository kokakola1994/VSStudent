#pragma once
#include "Shape.h"

class Circle :
	public Shape
{
protected:
	int cx, cy, radius;
public:
	Circle(int x = 0, int y = 0, int r = 0);
	~Circle() { };
	void Draw(HWND &hwnd, HDC &hdc);

};

