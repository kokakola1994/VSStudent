// ZadanieDomowe Informatyka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <cstdarg>
#include <stdarg.h>
#include <numeric>
using namespace std;

//int Calc(int A, int B,int Op)
//{
//	int rez = 0;
//	switch (Op)
//	{
//	case 1: rez = A - B; cout << "Odejmowanie: " << rez << endl; break;
//	case 2: rez = A / B; cout << "Dzielienie: " << rez << endl; break;
//	case 3: rez = A * B; cout << "Mnozenie: " << rez << endl; break;
//	default: rez = A + B; cout << "Dodawanie: " << endl; break;
//	}
//	return rez;
//}
//void DigitCountSum(int K, int C, int S)
//{
//	int Z;
//	cout << "Wpisz K: ";
//	cin >> K;
//	cout << endl;
//	S = 0;
//	for (int i = 0; i < K; i++)
//	{
//		S = S + K;
//	}
//	C = K;
//	cout << "Suma cyfr S: " << S << endl;
//	cout << "Ilosc cyfr C: " << C << endl;
//
//}
//
//int fib(int x) {
//	if ((x == 1) || (x == 0)) {
//		return(x);
//	}
//	else {
//		return(fib(x - 1) + fib(x - 2));
//	}
//}
//
void map(double* arr, unsigned size, double (*fun)(double))
{
	unsigned i;
	for (i = 0; i < size; i++)
	{
		arr[i] = fun(arr[i]);
	}
}
double wartosc(double a)
{
	if (abs(a)<10.0) { return sqrt(abs(a)); }
	else { return a; }
}
void print(double* arr, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
double arraySum(double a[], int n)
{
	int initial_sum = 0;
	return accumulate(a, a + n, initial_sum);
}

int main(void)
{
	double a[] = { -1,20,3,-14,-5,61,-7,8,-9,10 };
	unsigned n1 = sizeof(a) / sizeof(double);
	print(a, n1);
	map(a, n1, wartosc);
	print(a, n1);
	arraySum(a, n1);
	double* b = new double[10];
	for (int i = 0; i < n1; i++)
	{
		if (arraySum(a, n1) > a[i])
		{
			b[i] = arraySum(a,n1);
		}
		else
		{
			b[i] = a[i];
		}
		cout << b[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
//
//int main()
//{
	//cout << wartosc(-1, -50, 3, 12, 0);
	//int A, B, op;
	//int Z = 0;
	//int C = 0;
	//cout << "Wpisz liczby A i B" << endl;
	//cout << "Wpisz numer od 1 do 3: " << endl;
	//cin >> A; cin >> B; cin >> op;
	//Calc(A, B, op);
	////printf("wartosc = %u\n",wartosc(5, 21, 11, 2, 3, 5));

	//int x, i = 0;
	//cout << "Wpisz ilosc serii : ";
	//cin >> x;
	//cout << "\nFibonnaci serija : ";
	//while (i < x) {
	//	cout << " " << fib(i);
	//	i++;
	//}
	//int s = 0;
	//for (int i = 0; i < 5; i++)
	//{
	//	DigitCountSum(Z, C, s);
	//}
	/*return 0;
}*/

/*int main()
{
	int t1 = 0, t2 = 1, nextTerm = 0, n;
	cout << "Enter a positive number: ";
	cin >> n;
	// displays the first two terms which is always 0 and 1
	cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
	nextTerm = t1 + t2;
	while (nextTerm <= n)
	{
		cout << nextTerm << ", ";
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return 0;
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
