// PlikTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "stdio.h"
#include "stdlib.h"
#include <string.h>
#include <fstream>



void Imie() {
	const char* imie = "Mykola Klymchuk\n";
	for (int i = 0; i < (80 / 2 - strlen(imie) / 2); i++) {
		printf(" ");
	}

	printf("%s", imie);
}

void obslugaPliku() {
	char slowo[100];
	/*printf("\nPodaj slowo do zapisania do pliku ");
	scanf_s("%s", slowo, 99);*/

	int ile = 10;

	/*printf("Ile razy zapisac do pliku: ");
	scanf_s("%d", &ile);*/

	char nazwaPliku[10];
	printf("\nPodaj nazwe pliku, ktory ma zostac utworzony: ");
	scanf_s("%s", nazwaPliku, 9);

	FILE* plik1;
	fopen_s(&plik1, nazwaPliku, "w");
	if (plik1 != NULL) {
		for (int i = 0; i < ile; i++) {
			fprintf(plik1, slowo);
			fprintf(plik1, "\n");
		}

				plik1 = fopen_s(nazwaPliku, "r");
				if (plik1 == NULL)
				{
					printf("");
					exit(0);
				}

				printf("Wpisz file do czytannia \n");
				scanf("%s", "Plik.txt");

				plik2 = fopen_s("Plik2".txt, "w");
				if (plik2 == NULL)
				{
					printf("Nie moge otwożyćfile %s \n", "Plik.txt");
					exit(0);
				}

				char c = fgetc(plik1);
				while (c != EOF)
				{
					fputc(c, plik2);
					c = fgetc(plik1);
				}

				printf("\nZawartośćscopijowana %s", "Plik2.txt");
				fclose(plik1);
				fclose(plik2);
			}
		}
		else {
			printf("Blad tworzenia pliku");

		}
	}
}

	int main()
{
	Imie();
	obslugaPliku();

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
