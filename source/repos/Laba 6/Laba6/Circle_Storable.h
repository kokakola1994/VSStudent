#pragma once
#include "Circle.h"
#include "Storable.h"
class Circle_Storable :
	public Circle, virtual public Storable
{

public:
	Circle_Storable(const char *f1, const char *f2, int x = 0, int y = 0, int r = 0) : Storable(f1, f2), Circle(x, y, r) {};
	Circle_Storable(const char* f, int mode, int x = 0, int y = 0, int r = 0) : Storable(f, mode), Circle(x, y, r) {};

	~Circle_Storable() {};
	int Read();
	int Write();

};
