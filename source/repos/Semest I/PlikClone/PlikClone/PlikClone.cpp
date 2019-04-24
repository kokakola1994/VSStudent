// PlikClone.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

void imie()
{
	cout << "Mykola Klymchuk" << endl;
}

int main()
{
	cin >> a;
		ifstream  CLONE1("clone1.txt");
		ifstream  CLONE2("clone2.txt");
		ofstream  SAVE("quicksave.sfs");
		if (!CLONE1 || !CLONE2 || !SAVE)
		{
			cout << "Пожалуйста, положите файлы клона" << endl;
			cout << "в одну папку с данной программой" << endl;
			cout << "Имя файлов с клоном должно быть CLONE1.sfs и CLONE2.sfs" << endl;
			system("pause");
			return 0;
		}
		const int size = 256;
		char mas[size];
		for (int i = 0; i < 3; i++) // копируем первые 3 строки из второго файла
		{
			CLONE2.getline(mas, size);
			SAVE << mas << endl;
		}
		for (int i = 0; i < 3; i++) // копируем 3 строки из первого файла
		{
			CLONE1.getline(mas, size);
			SAVE << mas << endl;
		}
		while (CLONE2.getline(mas, size))// дописываем остаток
			SAVE << mas << endl;
		CLONE1.close();
		CLONE1.close();
		SAVE.close();
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
