// Homework Programowania I.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>;
#include <cstdarg>
using namespace std;

//void randtab(int N, int* A)
//{
//	int i;
//	for ( i = 0; i < N; i++) 
//	{
//		A[i] = 1 + rand() % 50;
//		cout << A[i] << " ";
//	}
//	cout << endl;
//}
//void Compare(int* A, int* B, int* C, int N)
//{
//	for (int i = 0; i < N; ++i)
//	{
//			C[i] = A[i] >= B[i];
//	}
//
//}
//void Print(int A[], int N)
//{
//	for (int i = 0; i < N; ++i)
//		cout << A[i] << " ";
//	cout << endl;
//}

//int sum(int, int);
//double sum(double, double);
//void swap(int& a, int& b);
//
//int main()
//{
	////Zadanie N 1
	//int a, b;

	//printf("Podaj dwie liczbe niezerowe rzeczewiste: ");

	//scanf_s("%d", &a);

	//scanf_s("%d", &b);
	//
	//int sum, ilo, roz, iloraz;

	//sum = pow(a + b, 2);

	//roz = pow(a - b, 2);

	//ilo = pow(a * b, 2);

	//iloraz = pow(a / b, 2);

	//printf("Suma cyfr kwadratow podanej liczby %d\n iloczyn kwadratow podanej liczby%d\n roznice kwadratow cyfr podanej liczby %d\n iloraz kwadratow podanej liczby %d\n ", sum, ilo, roz, iloraz);

	//system("pause");
	//
	//return 0;


	// koniec pirwszego zadania

	//Zadanie N 2

	//int a;

	//printf("Podaj masu w kg: ");

	//scanf_s("%d", &a);

	//int ilo;

	//ilo = a / 1000;

	//printf("Massa w tonnah %d\n ", ilo);

	//return 0;

	//koniec drugiego zadania

	//Zadanie N3
	/*
	int A, B;

	printf("Podaj liczby A i B\n ");

	scanf_s("%d", &A);

	scanf_s("%d", &B);

	if (A & 1) printf("Liczba A nieparzysta");

	else printf("Liczba A parzysta");

	if (B & 1) printf("Liczba B nieparzysta");

	else printf("Liczba B parzysta");

	system("pause");

	return 0;
*/
//koniec zadania 3

//Zadanie 4

/*int a;

printf("");

for (int i = 0; i < 3; i++)

{
	scanf_s("%d", &a);

	if (a < 0) printf("minus\n");

	else printf("plus\n");
}*/
//koniec czwartego zadania

//Zadanie 5

/*for (int i = 0; i < 4; i++)
{
	int N;

	int A, B, rez;

	printf("Wprowadz numer od 1 do 4\n");

	scanf_s("%i", &N);

	scanf_s("%d", &A);

	scanf_s("%d", &B);

	switch (N)

	{

	case 1: rez = A + B; printf("Dodawanie = %d \n", rez); break;

	case 2: rez = A - B; printf("Odejmowanie = %d \n", rez); break;

	case 3: rez = A * B; printf("Mnozenie = %d \n", rez); break;

	case 4: rez = A / B; printf("Dzielienie = %d \n", rez); break;

	default: printf("blend\n"); break;

	}

}

system("pause");

return 0;
*/

//int ile;
//printf("Ile gwiazdek wpisac\n");
//scanf_s("%d", &ile);
//while (ile)
//{
//	printf("*");
//	ile--;
//}

//int a = 1, k = -1;
//do
//{
//	scanf_s("%d", &a);
//	k++;
//} while (a != 0);
//printf("%d\n", k);

//int n;
//double a, min = DBL_MAX, max = DBL_MIN;
//printf("N = ");
//scanf_s("%d", &n);
//unsigned i;
//for (i = 1; i <= n; i++)
//{
//	printf("a [%d] =", i);
//	scanf_s("%lf", &a);
//	if (a < min) min = a;
//	if (a > max) max = a;
//}
//printf("min = %lf max = %lf\n", min, max);

//int n;
//double a;
//printf("podaj a rzeczywiste oraz n calkowite\n");
//scanf_s("%lf %d", &a, &n);
//double sum = 1, pot = a;
//int minus = -1;
//for (int i = 0; i < n; i++)
//{
//	sum += minus * pot;
//	minus *= -1;
//	pot *= a;
//}
//printf("%lf\n", sum);
//zadanie 1
	//int n, i;

	//unsigned long long silna = 1;

	//printf("Wpisz integer:\n ");

	//scanf_s("%d", &n);

	//if (n < 0)

	//	printf("Error! Silna nie istnieje\n");

	//else
	//{
	//	for (i = 1; i <= n; ++i)
	//	{
	//		silna *= i;
	//	}
	//	printf("Silnia of %d = %llu\n", n, silna);
	//}

	////zadanie 2
	//int a, k = 1;

	//printf("Wpisz integer:\n ");

	//scanf_s("%d", &a);

	//while (a <= 1)
	//{
	//	printf("Nie istnieje\n");

	//	return 0;
	//}

	//int sum = 0;

	//while (sum <= a);
	//{
	//	sum = sum + k;

	//	
	//	if (sum <= a)
	//	{
	//		printf("%d", sum);
	//		k++;
	//	}
	//	printf("%d", a);
	//}
	////zadanie 3 Suma liczb
	//int i2, N2;

	//unsigned long sum1;

	//printf("Wpisz wartosc N:\n ");

	//scanf_s("%d", &N2);

	//sum1 = 0;

	////liczba sumy serii
	//
	//for (i2 = 1; i2 <= N2; i2++)
	//{
	//	sum1 = sum1 + (i2 + i2);
	//	printf("%d""\n ", sum1);
	//}

	//printf("Suma N: %ld\n", sum1);

	//return 0;

//void pisz(void);
//int a = 2, b = 3;
//int c = sum(a, b);
//cout << c << endl;
//cout << sum(2.3, 4.5) << endl;
//swap(a, b);
//cout << "In main a = " << a << " b = " << b << endl;
//cout << "In main" << &a << " " << &b << endl;
//cout << "In fun" << &a << " " << &b << endl;
////cout << silnia(5);
////int c = a;
////a = b;
////b = c;
////cout << "in fun a =" << a << "b = " << b << endl;
//pisz();
//}
//
//unsigned silnia(unsigned n)
//{
//	if (n == 0) return 1;
//	else return n * silnia(n - 1);
//}
//void pisz()
//{
//	cout << "Hello word!" << endl;
//}
//double sum(double a, double b)
//{
//	return a + b;
//}
//void swap(int& a, int& b)
//{
//}
//int sum(int a, int b)
//{
//	return a + b;
//}
//void swap(int* a, int* b)
//{
//	int c = *a;
//	*a = *b;
//}
//
//int main()
//{
//	int A, B; //zadanie 1
//	cout << "Liczba A: " << endl;
//	cin >> A;
//	cout << "Liczba B: " << endl;
//	cin >> B;
//	if (A < B)
//	{
//		for ( A; A <= B; A++)
//		{
//			for (int i = 1; i <= A; i++)
//			{
//				cout << "  " << A << endl; 
//			}
//			cout << " = " << A << endl;
//		}
//
//	}
//	else
//	{
//		cout << "Blad albo A > B :(" << endl;
//	}
//
//	int K; //zadanie 2
//	int sum = 0;
//	cout << "K = ";
//
//	cin >> K;
//
//	for (int i = 1; i <= K; i++)
//	{
//		for (int j = K; j >= 0; j--)
//		{
//			cout << "Zestaw : " << j << endl;
//		}
//		sum = K + sum;
//		cout << "Elementow we wszystkich zestawu: " << sum << endl;
//	}
//
//	int N;
//	cout << "Wpisz iloszc elementow tablic: " << endl;
//	cin >> N;
//
//	int* C = new int [N];
//	int* D = new int[N];
//	int* E = new int[N];
//	srand(time(NULL));
//	cout << "Tablica A: "<< endl;
//	randtab(N, C);
//	cout << "Tablica B: "<< endl;
//	randtab(N, D);
//	//Print(C, N);
//	//Print(D, N);
//	cout << endl;
//	for (int i = 0; i < N; i++)
//	{
//		if (C[i] > D[i])
//		{
//			E[i] = C[i];
//		}
//		else if (C[i] < D[i])
//		{
//			E[i] = D[i];
//		}
//		else
//		{
//			E[i] = D[i];
//		}
//		cout << E[i] << " ";
//	}
//}
int sum(int n, ...)
{
	int wynik = 0;
	for (int* ptr = &n; n > 0; n--)
	{
		wynik += *(++ptr);
	}
	return wynik;
}
int mnoz(int pierwszy, ...)
{
	va_list arg;
	int iloczyn = 1, t;
	va_start(arg, pierwszy);
	for (t = pierwszy; t; t = va_arg(arg, int))
	{
		iloczyn *= t;
	}
	va_end(arg);
	return iloczyn;
}
int sum(int a, int b)
{
	return a + b;
}
int mnoz(int a, int b)
{
	return a * b;
}
int deleteEven(int a)
{
	if (a % 2 == 0) { return 0; }
	else { return a; }
}
int dble(int a)
{
	return 2 * a;
}
void map(int* arr, unsigned size, int (*fun)(int))
{
	unsigned i;
	for (i = 0; i < size; i++)
	{
		arr[i] = fun(arr[i]);
	}
}
void print(int* arr, unsigned size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	cout << sum(3, 1, 2, 3) << endl;
	cout << sum(5, -10, 12, 13, 14, 15) << endl;
	cout << mnoz(1, 4, 5, 6, 0) << endl;
	cout << mnoz(1, -4, -5, 6, -14, 0) << endl;
	int (*fptr)(int, int) = NULL;
	int result;
	fptr = sum;
	result = fptr(10, 40);
	cout << result << endl;
	fptr = mnoz;
	result = fptr(10, 40);
	cout << result << endl;
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[] = { 1,2,3,4,5,6,7,8,9,10 };
	unsigned n1 = sizeof(a) / sizeof(int);
	n2 = sizeof(b) / sizeof(int);
	map(a, n1, deleteEven);
	print(a, n1);
	map(b, n2, dble);
	print(b, n2);

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
