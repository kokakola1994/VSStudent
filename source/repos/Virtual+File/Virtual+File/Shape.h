#pragma once
#include <iostream>

#include <fstream>

#include <conio.h>

#include <math.h>



#ifndef MAX

# define MAX 100

#endif
using namespace std;
class Shape

{

protected:

	double x, y;



public:

	void set(double ix, double iy = 0)

	{

		x = ix;

		y = iy;

	}

	Shape(double ix = 0, double iy = 0)

	{

		x = ix;

		y = iy;

	}

	virtual ~Shape()

	{

		std::cout << "Deleting Shape\n";

	}



	virtual void print() = 0;

	virtual unsigned type() const = 0;



	virtual void store(std::ofstream& s)

	{

		s << x << std::endl << y << std::endl;

	}

	virtual void load(std::ifstream& s)

	{

		s >> x >> y;

	}

};



