#include "pch.h"
#include "Triangle.h"

Triangle::Triangle(int x1, int y1, int x2, int y2, int x3, int y3) :

	x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3) {};



void Triangle::Draw(HWND &hwnd, HDC &hdc)

{

	POINT T[3] = { { x1, y1 },{ x2, y2 },{ x3, y3 } };

	HRGN rgnTr = CreatePolygonRgn(T, 3, WINDING);

	FillRgn(hdc, rgnTr, CreateSolidBrush(RGB(255, 0, 0)));

}