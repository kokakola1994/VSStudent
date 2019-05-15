// KlasAgregatWariant6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "KartaCzytelnika.h"
#include "Library.h"
#include "Menu.h"
using namespace std;

int main()
{
	KartaCzytelnika a(1, 2030, "George Martin", "los-Angeles"),b(2,2015,"G.G Martin","London");
	Library one;
	one.AddCzytelnik(a);
	one.AddCzytelnik(b);
	Menu m(one);
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
