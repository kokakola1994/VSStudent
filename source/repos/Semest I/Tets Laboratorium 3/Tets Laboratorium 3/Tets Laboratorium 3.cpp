// Tets Laboratorium 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
		fraction fraction1(8, 2);
		fraction fractionn(2, 7);
		fraction fraction2(8, 2);
		fraction fraction3(1, 3);
		fraction fraction4(2, 7);

		//cout << fraction1.operator*(fraction2) << endl;
		cout << (fraction1 * fractionn) << endl;
		cout << (fraction1 / fractionn) << endl;
		cout << (fraction1 + fractionn) << endl;
		cout << (fraction1 - fractionn) << "\n" << endl;

		cout << " *= " << (fraction1 *= fractionn) << endl;
		cout << " /= " << (fraction2 /= fractionn) << endl;
		cout << " += " << (fraction3 += fractionn) << endl;
		cout << " -= " << (fraction4 -= fractionn) << "\n" << endl;

		fraction fr1(3, 2);
		fraction fr2(3, 2);
		cout << fr1 << " = " << fr2 << " ?? " << (fr1 == fr2) << endl;
		cout << fr1 << " != " << fr2 << " ?? " << (fr1 != fr2) << endl;
		cout << fr1 << " < " << fr2 << " ?? " << (fr1 < fr2) << endl;
		cout << fr1 << " <= " << fr2 << " ?? " << (fr1 <= fr2) << endl;
		cout << fr1 << " > " << fr2 << " ?? " << (fr1 > fr2) << endl;
		cout << fr1 << " >= " << fr2 << " ?? " << (fr1 >= fr2) << "\n" << endl;

		cout << " ++f " << ++fractionn << endl;
		cout << " f++ " << fractionn++ << endl;
		cout << " --f " << --fr1 << endl;
		cout << " f-- " << fr1-- << endl;

		std::cin >> fr1;
		cout << fr1 << endl;

		int a = 40;
		int b = 688;
		int p = pgcd(a, b);
		cout << "pgcd de " << a << " et " << b << " = " << p << endl;

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
