// OpenPrintTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	char slowa[99];
	int ile = 0;
	FILE *fp;
	fopen_s(&fp,"plik.txt","r");
	if (fp == NULL)
	{
		printf("pliku niema \n");
	}
	else
	{
		while (feof(fp)==0)
		{
			fscanf_s(fp, "%s", &slowa, 1);
			printf_s("%s", slowa);
			ile++;
		}
		printf("w pliku znajduje sie ile slow \n", ile);
		fclose(fp);
	}
	system("pause");
	return 0;
	/*FILE * fp;
	printf("Mykola Klymchuk");
	fopen_s(&fp, "E:\\test.txt", "r");
	printf("fp");
	fclose(fp);*/
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
