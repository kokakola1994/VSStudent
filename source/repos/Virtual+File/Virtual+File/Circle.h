#pragma once
#include "Shape.h"
class Circle : public Shape

{

public:

	Circle(double ix) : Shape(ix, 0)

	{

	}

	~Circle()

	{

		std::cout << "Deleting Circle\n";

	}

	void print()

	{

		std::cout << " Circle with radius " << x << "\n";

	}



	unsigned type() const

	{

		return 3;

	}

};


