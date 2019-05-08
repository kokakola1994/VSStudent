// Virtual+File.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <conio.h>
#include <math.h>
#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include"pch.h"
#include "Circle.cpp"
#include"Shape.cpp"
#include"Rectangle.cpp"
#include "Triangle.cpp"

#ifndef MAX

# define MAX 100

#endif

using namespace std;

void clear(Shape* arr[])

{

	for (unsigned i = 0; i < MAX; i++)

	{

		if (arr[i]) delete arr[i];

		arr[i] = NULL;

	}

}

void store(std::ofstream& s, Shape* arr[])

{

	unsigned int i, count = 0;

	for (i = 0; i < MAX; i++)

		if (arr[i]) count++;

	s << count << std::endl;

	for (i = 0; i < MAX; i++)

	{

		if (!arr[i]) continue;

		s << arr[i]->type() << std::endl;

		arr[i]->store(s);

	}

}

int load(std::ifstream& s, Shape* arr[])

{
	clear(arr);

	int i, count;

	s >> count;

	for (i = 0; i < count && i < MAX; i++)

	{
		unsigned type = 0;

		s >> type;

		switch (type)

		{
		case  1: arr[i] = new Triangle(0, 0); break;

		case  2: arr[i] = new Rectangle(0, 0); break;

		case  3: arr[i] = new Circle(0); break;

		default: throw "Unknown object";

		}

		arr[i]->load(s);

	}

	return count;

}

int main()

{

	Shape* arr[MAX];

	int count = 0;

	for (unsigned i = 0; i < MAX; i++)

	{

		arr[i] = NULL;

	}

	int j = 0, ch;

	do

	{

		cout

			<< " <1> - Add triangle \n"

			<< " <2> - Add Rectanglre \n"

			<< " <3> - Add Circle \n"

			<< " <4> - Print  all element and your's metods  \n"

			<< " <5> - Save  all element in file  \n"

			<< " <6> - Load all element of file  \n"

			<< " <7> - Clear all element  \n"

			<< " <8> - Exit \n";

		cin >> ch;       //  menu

		switch (ch)

		{

		case 1:

			cout << "Enter the number of new triangle - \n";

			cin >> j;

			for (int i = count; i < count + j; i++)

			{

				arr[i] = new Triangle(1 + rand() % MAX, 1 + rand() % MAX, 1 + rand() % MAX);

				arr[i]->print();



			}

			count += j;

			break;

		case 2:

			cout << "Enter the number of new rectangle - \n";

			cin >> j;

			for (int i = count; i < count + j; i++)

			{

				arr[i] = new Rectangle(1 + rand() % MAX, 1 + rand() % MAX);

				arr[i]->print();

			}

			count += j;

			break;

		case 3:

			cout << "Enter the number of new circle - \n";

			cin >> j;

			for (int i = count; i < count + j; i++)

			{

				arr[i] = new Circle(1 + rand() % MAX);

				arr[i]->print();

			}

			count += j;

			break;

		case 4:

			for (int i = 0; i < count; i++)

			{

				arr[i]->print();

				//arr[i]->pole();

				//arr[i]->objetnosc();

			}

			break;



		case 5:

		{

			std::ofstream f;

			f.open("shapes.txt");

			store(f, arr);

			f.close();

		}

		break;

		case 6:

		{

			std::ifstream f;

			f.open("shapes.txt");

			count = load(f, arr);

			f.close();

		}

		break;

		case 7:

			clear(arr);

			count = 0;

			break;

		}

	} while (ch != 8);



	clear(arr);

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
