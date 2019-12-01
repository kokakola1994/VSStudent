// ZadanieDomowe Informatyka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Calc(int A, int B,int Op)
{
	int rez = 0;
	switch (Op)
	{
	case 1: rez = A - B; cout << "Odejmowanie: " << rez << endl; break;
	case 2: rez = A / B; cout << "Dzielienie: " << rez << endl; break;
	case 3: rez = A * B; cout << "Mnozenie: " << rez << endl; break;
	default: rez = A + B; cout << "Dodawanie: " << endl; break;
	}
	return rez;
}
void DigitCountSum(int &K, int &C, int &S)
{

}

int fib(int x) {
	if ((x == 1) || (x == 0)) {
		return(x);
	}
	else {
		return(fib(x - 1) + fib(x - 2));
	}
}

int main()
{
	int A, B, op;
	cout << "Wpisz liczby A i B" << endl;
	cout << "Wpisz numer od 1 do 3: " << endl;
	cin >> A; cin >> B; cin >> op;
	Calc(A, B, op);

	int x, i = 0;
	cout << "Wpisz ilosc serii : ";
	cin >> x;
	cout << "\nFibonnaci serija : ";
	while (i < x) {
		cout << " " << fib(i);
		i++;
	}
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
