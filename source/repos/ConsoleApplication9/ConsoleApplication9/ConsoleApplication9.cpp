// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
		int number1;
		int number2;
		int ammount;
		int n1;
		int n2;
		int tab[50];
		char odp;

		printf("Mykola Klymchuk\n");
		do {
			printf("Podaj dolna granice przedzialu: ");
			scanf_s("%d", &number1);

			printf("Podaj gorna granice przedzialu: ");
			scanf_s("%d", &number2);

			printf("Ile liczb wylosowac:");
			scanf_s("%d", &ammount);

			for (int i = 1; i <= ammount; i++);
			{
				tab[] = srand() % (number2 + 1 - number1) + number1);
				printf("%d", &n2);
			}


		}

			/*do {
				printf("\nCzy wykonac program ponowie (t/n)?\n");
				scanf_s("%c", &odp);
			} while (odp != 't' && odp != 'n');

		} while (odp == 't');
		return 0;*/


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
