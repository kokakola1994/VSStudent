// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{  
	int n1, n2, ammount, n4, n5=0;
	int tab[50];
	char let;
	printf("Mykola Klymchuk\n");
	srand(time(0));
	do
	{
		
		printf("Podaj dolna granice losowania: ");
			scanf_s("%d", &n1);
		printf("Podai gorna granice losowania: ");
			scanf_s("%d", &n2);
		printf("Ile lichb wylosowac?:\n");
			scanf_s("%d", &ammount);
		for (int i = 0; i <= ammount; i++)
		{
			tab[i] = rand() % (n2 - n1) + n1;
			printf("%d", tab[i]);
			printf(" ");
		}
		n4 = tab [0];
		printf("Podai lichbe do przeshukania: \n");
		scanf_s("%d", &n4);
		for (int i = 0; i <= ammount; i++) {
			if (tab[i] == n4); {
				n5++;
			}

		}
		printf("\nIlosc lichb w wylosowaniu: \n");
		printf("%d", n5);
		printf(" ");
		do
		{
			printf("Chy wykonac program ponowie (t/n)?\n");
			scanf_s("%c", &let);
		} while (let != 't' && let != 'n');
	} while (let != 'n');
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
