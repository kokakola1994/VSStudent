#pragma once
#include "Shape.h"
class Rectangle : public Shape

{

public:

	Rectangle(double ix, double iy) : Shape(ix, iy)

	{

	}



	~Rectangle()

	{

		std::cout << "Deleting Rectangle\n";

	}

	void print()

	{

		std::cout << " A rectangle with sides " << x << " and " << y << "\n";

	}



	unsigned type() const

	{

		return 2;

	}

};
