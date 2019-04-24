// Laboratorium 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <Windows.h>
#include "Triangle_Storable.h"
#include "Circle_Storable.h"
//#define MAX 10

using namespace std;

int main()
{
	HWND hwnd = GetConsoleWindow(); HDC hdc = GetDC(hwnd);
		Shape * shape[10];
	int r = 1;
	cout << "Mode: 1 - Write, 2-Read" << endl;
	cin >> r;
	try
	{
		if (r == 2)
		{
			shape[0] = new Circle_Storable("c1.txt", Storable::READ);
			shape[1] = new Triangle_Storable("t1.txt", Storable::READ);
		}
		else
		{
			shape[0] = new Circle_Storable("c1.txt", Storable::WRITE, 100, 100, 30);
			shape[1] = new Triangle_Storable("t1.txt", Storable::WRITE, 10, 10, 20, 100, 50, 120);
		}
	}
	catch (const char *s)
	{
		printf("imposible to open file'%s'\n", s); system("pause");
		return 1;
	}
	for (int i = 0; i < Shape::GetCount(); i++)
		if (r == 2)
		{
			dynamic_cast<Storable*>(shape[i])->Read();
		}
		else
		{
			dynamic_cast<Storable*>(shape[i])->Write();
		}
	system("cls");
	for (int i = 0; i < Shape::GetCount(); i++)
		shape[i]->Draw(hwnd, hdc);
	system("pause");
	system("cls");
	for (int i = 0; i < Shape::GetCount() : i++)
		delete shape[i];
	return 0;
}
	/*Shape *arr[MAX];
	for (int i = 0; i < MAX; i++)
	{
		arr[i] = NULL;
	}
	for (int i = 0; i < MAX; i++)
	{
		if (i % 3 == 0) arr[i] = new Triangle(1 + rand() % MAX, 1 + rand() % MAX, 1 + rand()%MAX);
		else if (i % 3 == 1) arr[i] = new Rectangle(1 + rand() % MAX, 1 + rand() % MAX);
		else arr[i] = new Circle(1 + rand() % MAX); 
		arr[i]->print();
		arr[i]->area();
		arr[i]->obwod();
	}
	for (int i = 0; i < MAX; i++)
		if (arr[i]) delete arr[i];
		*/
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
