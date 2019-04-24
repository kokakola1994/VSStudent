#pragma once
#include "Triangle.h"
#include "Storable.h"

class Triangle_Storable :
	public Triangle, virtual public Storable
{
public:
	Triangle_Storable(const char *f1, const char *f2, int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, int x3= 0, int y3 = 0) : 
		Storable(f1, f2), Triangle(x1, y1, x2, y2, x3, y3) {};
	Triangle_Storable(const char *f, int mode, int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, int x3 = 0, int y3 = 0) :
		Storable(f, mode), Triangle(x1, y1, x2, y2, x3, y3) {};
	~Triangle_Storable() {};
	int Read();
	int Write();
};

