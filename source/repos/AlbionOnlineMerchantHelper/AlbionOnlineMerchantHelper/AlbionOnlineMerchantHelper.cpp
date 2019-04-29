// AlbionOnlineMerchantHelper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Flax.h"
#include"NeatClouthe.h"
#include "Resourse.h"
using namespace std;

float profit(float a, float b)
{
	float c;
	c = (a*b) * 2 + 9 * b;
	return c;
}
float tax(float a, float b)
{
	float c;
	c = b - (a / 100 * 2);
	return c;
}

int main()
{
	float a,b,d,e;
	Flax*flax1 = new Flax();
	flax1->name();
	a = flax1->price();
	b = flax1->amount();
	NeatClouthe*netcl1 = new NeatClouthe();
	netcl1->name();
	netcl1->price();
	netcl1->amount();
	d = netcl1->price1();
	cout << tax(d, d) - profit(a,b) << endl;
	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
