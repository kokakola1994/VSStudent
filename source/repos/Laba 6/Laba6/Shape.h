#pragma once
#include <iostream>
#include <windows.h>
using namespace std;

class Shape
{
protected:
	static int count;
	Shape() { count++; }
public:
	virtual ~Shape() { count++; }
	static int GetCount() { return count; }
	virtual void Draw(HWND &hwnd, HDC &hdc) = 0;

};

