// Laboratorium 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include <string.h>
using namespace std;
int main(void) {
	char lupus[50]; //ustawienie zmiennej na 50 liter
	printf_s ("Podaj imie z min 5 literami \n");
	scanf_s ("%50s", lupus); //skanowanie zmiennej najpier wpisujemy co ma skanowac czyli string z 50 literami
	int a = strlen(lupus); //oblicza dlugosc stringu
	if (a < 5) {
		printf("To imie nie ma 5 liter\n");
	}
	else {// zadanie co mialo byc ostatnio na ocene tylko na przypomnienie
		for (int i = 0; i < 80; i++) {
			printf("*");
		}
		for (int i = 0; i < 40 - a / 2; i++) {
			printf(" ");
		}
		printf(lupus);
		printf("\n");
		for (int i = 0; i < 80; i++) {
			printf("*");
		}
	} //kod zrobiony zostal tylko do przecwiczenia podstaw co mamy zrobic
	return 0;
}
