// ConsoleApplication10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void name() {
	printf("Mykola Klymchuk\n");
}
 
float dziel(float x, float y){
	if
		(y == 0) 
	{
		printf("Dzielnik nie moze buc zero\n");
		return 0;
	}
	return x / y;
 }
int main()
{
	name();
	float x, y;
	char wyn;
	do {
		printf("Podaj dzielnik n1: ");
		scanf_s("%g", &x);
		printf("Podaj dzielnik n2: ");
		scanf_s("%g", &y);
		printf("Wynnik dzielenia: ");
		printf(" ");
		printf("%g\n", dziel(x, y));
		do
		{
			printf("Chy wykonac program ponowie (t/n)?\n");
			scanf_s("%c", &wyn);
		} while (wyn != 't' && wyn != 'n');
	} while (wyn != 'n');
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
