#pragma once
#include "Quadrangle.h"
class Diamond :
	public Quadrangle
{
public:
	Diamond(double ix) : Quadrangle(ix) {}
	~Diamond() { cout << "Deleting diamond " << endl; }
	void print() { cout << "A diamond with sides" << x; }
	//void diagonal(){
	void area() { cout << "has an area off" << x * y << endl; }
	void obwod() { cout << "has a perimetr of " << 2 * (x + y) << endl; }
};

