// Masywytest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
/*
int main()
{
    cout << "Hello World!\n"; 
	int abc[5][5];
	cout << "indeks" << "\t\t" << "element massiva" << endl;
	for (int i = 0; i <= 5; i++) {
		cout << "array1[" << i << "]" << "\t\t" << abc[i] << endl;
	}
	cout << "\n" << "Drugi masyw" << endl;
	for (int j = 0; j <= 5; j++)
	{
		cout << "array1[" << j << "]" << "\t\t" << abc[j] << endl;

	}
	system ("pause");
	return 0;
}
*/
#include "time.h"

/*int main()
{
	
	int a, b;
	int abc[10][10];
	const int ROZMIAR = 10; 
	srand(time(0));
	
	cout << "Mykola Klymchuk\n";
	cout << "Podaj numer: ";
	cout << endl;

	cin >> a;
	cin >> b;

	for (int i = 0; i < ROZMIAR; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			abc[i][j] = rand() % (b + 1 - a) + a;
			cout << abc[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < ROZMIAR; i++)
	{
		for (int j = ROZMIAR - 1; j > -1; j--)
		{
			if (i == j)
			{
				cout << "0 ";
			}
			else
			{
				cout << abc[i][j] << " ";
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
*/

void wys(int m[10][10])
{
	for (int i = 0; i < rozmiar; i++)
	{
		for (int j = 0; j < rozmiar; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void dodaj(int m[10][10], int ma[10][10])
{
	for (int i = 0; i < rozmiar; i++)
	{
		for(int j=0; j<rozmiar; j++)
		{
			m[i][j] += ma[i][j];
		}
	}
}

int main{

int a,b;
const int rozmiar = 10;
int m[10][10];
int ma[10][10];
srand(time(0));
cout << "Mykola Klymchuk" << endl;
cout << "Podaj przedzial losowania: ";
cin << a;
cin << b;
for (int i = 0; i < rozmiar; i++)
{
	for (int j = 0; j < rozmiar; j++)
	{
		m[i][j] = rand() % (b + 1 - a) + a;
		ma[i][j] = rand() % (b + 1 - a) + a;
	}
}
wys(m);
wys(ma);
dodaj(m, ma);
wys(m);
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
