// Homework Programowania I.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int main()
{
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
/*
	int n, i;
	unsigned long long silna = 1;
	printf("Wpisz integer: ");
	scanf_s("%d", &n);

	if (n < 0)
		printf("Error! Silna nie istnieje");
	else
	{
		for (i = 1; i <= n; ++i)
		{
			silna *= i;
		}
		printf("Factorial of %d = %llu", n, silna);
	}
	*/

/*int n, k = 0;
scanf_s("%d", &n);
while (n < 1)
{
	printf("Nie istnieje");
	return 0;
}
int sum = 0;
do
{
		printf("%d\n", sum = sum + k);
		k++;
} 
while (sum <= n);
return 0;*/

int N, k = 0, n;
//std::cout << "введите количество элементов в последовательности" << std::endl;
printf("Wpisz ilosc ");
scanf_s("%d", &N); // td::cin >> N;
if ((!std::cin) || (N <= 0))
{
	printf("gg");
	return 0;
}
int* arr = new int[N];
std::cout << "wpisz" << ' ' << N << ' ' << "чисел последовательности" << std::endl;
for (int i = 0; i < N; i++)
	std::cin >> arr[i];
sort(arr, arr + N, std::greater<int>());
std::cout << "отсортировали:" << std::endl;
for (int i = 0; i < N; i++)
	std::cout << arr[i] << ' ';
std::cout << std::endl;
for (int i = 0; i < N; i++)
{
	if (arr[i] % 2 == 0) k++;
	if (k == 3) { std::cout << "результат:" << ' ' << arr[i] << std::endl; break; }
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
