// ConsoleApplication11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int num_1, num_2, count, amount, s = 0;
	int tab[50];
	char key;
	srand(time(0));

	cout << "Mykola Klymchuk" << endl;
	do {
		cout << "Numer 1: ";
		cin >> num_1;
		cout << endl;
		cout << "Numer 2: ";
		cin >> num_2;
		cout << endl;
		cout << "How much numder's? ";
		cin >> count;
		cout << endl;

		for (int i = 1; i < count; i++) {
			tab[i] = rand() % (num_2 - num_1) + num_1;
			cout << tab[i] << " ";
		}
		cout << endl;
		amount = tab[0];
		for (int i = 1; i < count; i++) {
			if (tab[i] == amount)
				s++;
		}
		cout << "Text: " << s << endl;

		do {
			cout << "Restart program? T (tak) or N (nie)  ";
			cin >> key;
		} while (key != 't' && key != 'n');
	} while (key == 't');
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
