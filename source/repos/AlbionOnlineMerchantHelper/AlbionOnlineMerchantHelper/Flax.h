#pragma once
#include "Resourse.h"

class Flax :
	public Resourse
{
	float x, y;
public:
	Flax() :Resourse() {};
	void name()
	{ 
	cout << "Flax" << endl; 
	}
	float price()
	{ 
		cout << "Flax price: " << endl;
		cin >> x;
		return x;
	};
	int amount() 
	{ 
	cout << "Enter Flax amount: " << endl;
	cin >> y;
	cout << endl;
	return y;
	};

	~Flax() { cout << "deleting flax" << endl; };
};


