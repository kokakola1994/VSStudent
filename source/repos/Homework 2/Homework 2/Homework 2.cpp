// Homework 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Country.h"
#include "Region.h"
#pragma once

using namespace std;

void Egypt()
{
	Country a,b("Egypt",80), c(b), g=b;
	a.Print();
}

void regions()
{
	//Region a("Kairo", 5);
		//a.Print();
}

void copy(Country*a)
{
	a->SetTitle("Germany");
	a->SetPeople(80);
}

void copy(Region*a)
{
	//a->SetName("Bawaria");
	a->SetIndex(1);

}
int main()
{
	Country a,b ("Egypt", 80), c(b);
	a.Print();
	b.Print();
	c = b = a;
	c.Print();
	b.Print();
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
