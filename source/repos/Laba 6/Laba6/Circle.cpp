#include "pch.h"
#include "Circle.h"


Circle::Circle(int x, int y, int r) :cx(x), cy(y), radius(r) {}


void Circle::Draw(HWND &hwnd, HDC &hdc) {
	SelectObject(hdc, CreateSolidBrush(RGB(0, 255, 0)));
	Ellipse(hdc, cx - radius, cy - radius, cx + radius, cy + radius);
}
