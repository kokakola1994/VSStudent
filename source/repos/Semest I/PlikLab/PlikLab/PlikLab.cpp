// PlikLab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include "pch.h"
#include <iostream>


void imie() {
	printf("Mykola Klymchuk");
}

void plik() {
	char slowo[100];
	printf("\nPodaj slowo do zapisania do pliku ");
	scanf_s("%s", slowo,99);

	char nazwaPliku[10];
	printf("Podaj nazwe pliku, ktory ma zostac utworzony (10 abo mnie slow) : ");
	scanf_s("%s", nazwaPliku, 9);

	int ile;
	printf("Ile razy zapisac do pliku: ");
	scanf_s("%d", &ile);

	FILE* fp;
	fopen_s(&fp, nazwaPliku, "w");
	if (fp != NULL) {
		for (int i = 0; i < ile; i++) {
			fprintf(fp, slowo);
			fprintf(fp, "\n");
		}

		fclose(fp);
	}
	else {
		printf("Blad tworzenia pliku, prosze ponowie");
	}
}

int main()
{
	imie();

	plik();

	return 0;
}*/
#include "pch.h"
#include <iostream>

int main()
{
	char slowa[99];
	int ile = 0;
	FILE *fp;
	fopen_s(&fp, "plik.txt", "r");
	if (fp == NULL)
	{
		printf("pliku niema \n");
	}
	else
	{
		while (feof(fp) == 0)
		{
			fscanf_s(fp, "%s", &slowa);
			printf("%s", slowa);
			ile++;
		}
		printf("w pliku znajduje sie ile slow \n", ile);
		fclose(fp);
	}
	system("pause");
	return 0;
}
	/*FILE * fp;
	printf("Mykola Klymchuk");
	fopen_s(&fp, "E:\\test.txt", "r");
	printf("fp");
	fclose(fp);*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
