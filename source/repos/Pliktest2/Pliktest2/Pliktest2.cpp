// Pliktest2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "stdio.h"
#include "stdlib.h"
#include <string.h>

void imie()
{	char name[] = "Mykola";
	for (int a = 1; a < 80; a++)
	{
		printf("*");
	}
printf("\n");
for (int a = 1; a < 40 - strlen(name) / 2; a++) {
	printf(" ");
}
printf(name);
printf("\n");
for (int a = 1; a < 80; a++) {
	printf("*");

}

}

int main()
{
	FILE*fp;
	char slowo[99];
	char plik[99];
	int a;
	imie();
	printf("\n Podai slowo: ");
	scanf_s("%s", &slowo);
	printf("\n Podai ilosc: ");
	scanf_s("%d", &a);
	for (int i = 0; i<a; i++)
	{
		printf("%s", slowo);
		printf("\n");
	}
	printf("\n Podai nazwe pliku: ");
	scanf_s("%s", &plik);
	fopen_s(&fp, plik, "w");      //fopen_s(&fp, "test.txt", "r");
	for (int i = 0; i < a; i++)
	{
		fprintf(fp, "%s", slowo);
		fprintf(fp, "%s", "\n");
	}
	fclose(fp);
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
