#pragma once
#include "Resourse.h"
class NeatClouthe :
	public Resourse
{
	float x, y;
public:
	NeatClouthe() :Resourse() {};
	void name() { cout << "Neat Clouthe" << endl; }
	float price() 
	{ 
	cout << "Neat Clouthe price: " << endl;
	cin >> x;	
	return x;
	};
	int amount() 
	{ 
	cout << "Enter Neat Clouthe amount: " << endl;
	cin >> y;
	cout << endl;
	return y;
	};
	float price1()
	{
		float c;
		c = x * y;
		return c;
	};
	~NeatClouthe() { cout << "deleting Neat Clouthe" << endl; };
};

