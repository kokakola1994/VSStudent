#pragma once
#include "Shape.h"

class Triangle : public Shape

{

protected:

	double z;

public:

	Triangle(double ix, double iy, double iz = 0) : Shape(ix, iy)

	{

		z = iz;

	}



	~Triangle()

	{

		std::cout << "Deleting Triangle\n";

	}

	void print()

	{

		std::cout << " A triangle with sides " << x << " and " << y << " and " << z << "\n";

	}



	unsigned type() const

	{

		return 1;

	}



	virtual void store(std::ofstream& s)

	{

		Shape::store(s);

		s << z << std::endl;

	}

	virtual void load(std::ifstream& s)

	{

		Shape::load(s);

		s >> z;

	}

};



