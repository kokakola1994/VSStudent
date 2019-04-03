// Silna.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;

// парность не парность

int parz(int p_num) {

	if (p_num % 2 == 0)
		return true;
	else
		return false;
}

// вывод

void wys(int number) {

	if (parz(number) == 1)
		cout << "Parzysta liczba " << number << endl;
	else
		cout << "Nie parzysta lizcba " << number << endl;

}

// сумма квадратов

int kwad(int tab[], int suma) {

	if (suma == 0)
		return 0;
	else
		return tab[suma - 1] = (suma * suma) + kwad(tab, (suma - 1));

}

// факториал

int silna(int num) {

	if (num == 1)
		return 1;
	else
		return num * silna(num - 1);

}

int main()
{
	srand(time(NULL));
	int  tab[99];
	int number = rand() % 10;

	cout << "Suma kwadratu: " << number << " jest: " << kwad(tab, number) << endl;
	cout << "Silnia liczby " << number << " jest: " << silna(number) << endl;

	wys(number);
	wys(silna(number));

	return 0;
}




/*

tablice denamiczne edno i 2 wymiarowe ze cziegolnym , malock  callock,  real lock , free , debug na czym polega naryszenia pamienci , wycik pamoienci

def 1argumentowo parzysta boolin , z def suma kwadratow od 1 do n , wyliczicz sapisayw w tablice wsystkie wartosci
*/


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
