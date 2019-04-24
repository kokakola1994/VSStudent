// Homework for lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Quadrangle.h"
#include "Rectangle.h"
#include "Diamond.h"
#include "typeinfo.h"
#define MAX 9
#define NUM 50

using namespace std;

int main()
{
	Quadrangle *arr[MAX]; // tablice wskaznikow do klasy bazowej z 9 elementow
	for (int i = 0; i < MAX; i++)
	{
		arr[i] = NULL;
	}
	for (int i = 0; i < 6; i++) //elementy-potomnymi przez trzy
	{
		if (i % 2 == 0) arr[i] = new Rectangle(1 + rand() % MAX, 1 + rand() % MAX);
		else if (i % 2 == 1) arr[i] = new Diamond(1 + rand() % MAX, 1 + rand() % MAX);
		arr[i]->print();
		arr[i]->area();
		arr[i]->obwod();
	}
	for (int i = 0; i < MAX; i++)
		if (arr[i]) delete arr[i];
	Quadrangle *quad = new Rectangle(1 + rand() % MAX, 1 + rand() % MAX);
	if (Rectangle*rec = dynamic_cast<Rectangle*>(quad))
	{
		cout << "Dynamic_cast Rectangle " << endl;
		typeid(&rec);
	}
	else
	{
		cout << "Dynamic_cast other object " << endl;
	}

	quad = new Diamond(1 + rand() % MAX, 1 + rand() % MAX);
	if (Diamond*dim = dynamic_cast<Diamond*>(quad))
	{
		cout << "Dynamic_cast Diamond " << endl;
		typeid(&dim);
	}
	else
	{
		cout << "Dynamic_cast other object " << endl;
	}

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
