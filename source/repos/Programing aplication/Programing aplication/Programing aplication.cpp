// Programing aplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "time.h"
using namespace std;

const int rozmiar = 10;

/*int masyw()
{
	int masy[rozmiar][rozmiar];
	int mas[rozmiar][rozmiar];
	int a, b;
	srand (time(NULL));

	for (int i = 1; i < rozmiar; i++)
	{
		for (int j = 1; j < i; j++)
		{
			mas[i][j] = rand() % rozmiar;
			masy[i][j] = rand() % rozmiar;
			cout << mas[i][j] << endl;
			
		}
	
	}
	return 0;
}*/

void wys(int mas[rozmiar][rozmiar], int masy[rozmiar][rozmiar])
{
	for (int i = 1; i < rozmiar; i++)
	{

	}
}

int piramida()
{
	for (int i = 1; i < rozmiar; i++)
	{
		for (int j = 1; j < i; j++)
			cout << "*";
		{
			cout << " " << endl;
		}
	}
	
	cout << endl;
	return 0;
}

int main()
{
	masyw();
	piramida();
	system ("pause");
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
