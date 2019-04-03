// InformatykaTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int t[4][4];
	for (int i =0; i<4; i++)
		for (int j = 0; j < 4; j++)
		{
			if (i == j) t[i][j] = i + j;
			else t[i][j] = t[i - 1][j] + t[i][j];
			cout << t[i][j];
		}
	
}
/*{
	int tab[100];
	&tab[30] - &tab[10];

}*/
/*{					
	int f(int i);
	{
		i = 2 * i;
		return i;
	}
	int x = 2;
	f(f(f(x + 1)));
	cout << x;

}*/

/*{
	int f(int i);				N2
	{
		return 1 + 4;
	}
	int x = 1;
	cout << f(f(f(x)));
}*/


/*{
	

	int a = 2, b =1, delta = 8;				//N1
	double x1 = (-b + delta) / 2*a;
	cout << x1;
}*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
