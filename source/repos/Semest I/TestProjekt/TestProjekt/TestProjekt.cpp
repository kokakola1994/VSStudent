// TestProjekt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "time.h"
using namespace std;
const int ROZMIAR = 10;

void wys(int m[ROZMIAR])
{
	for (int i = 0; i<ROZMIAR; i++)
	{
			cout << m[i] << " ";
			cout << endl;
	}
	
}

void wys(int m[ROZMIAR][ROZMIAR])
{
	for (int i = 0; i < ROZMIAR; i++)
	{
		for (int j = 0; j < ROZMIAR; j++)
		{
			cout << m[i][j] << " ";
			cout << endl;
		}
		
		
	}

}

void dwowymiarowy(int mas[ROZMIAR][ROZMIAR],int m[ROZMIAR],int ma[ROZMIAR])
{
	for (int i = 0; i < ROZMIAR; i++)
	{
		mas[i][0] = m[i];
		mas[i][1] = ma[i];
		cout << mas[i][0] << " ";
		cout << mas[i][1] << "\n";
	}
	
}

int main()
{
	int a, b;
	int *m =new int [ROZMIAR];
	int ma[ROZMIAR];
	int mas[ROZMIAR][ROZMIAR];
	srand(time(0));
	cin >> a >> b;

	for (int i = 0; i < ROZMIAR; i++)
	{
		for (int j = 0; j < ROZMIAR; j++)
		{
			m[i]= rand() % (b + 1 - a) + a;
		}
	}
	dwowymiarowy(mas,m,ma);
	wys(m);
	wys(mas);
		
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
