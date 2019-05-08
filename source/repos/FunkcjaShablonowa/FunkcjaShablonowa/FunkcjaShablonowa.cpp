// FunkcjaShablonowa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
//#include "stdafx.h"

using namespace std;

//funkcja wyswietlenia dowolnej tablicy
template <typename T>
void printArray(const T* array, int count)
{
	static_assert(std::is_pod<T>::value, "typ T musi byc prostym.");

	for (int ix = 0; ix < count; ix++)
		cout << array[ix] << " ";
	cout << endl;
}


//zad1. wariant1. przyklad sparametryzowanej funkcji
template<typename T = int>

void F(T * arr, size_t N = 10, T t = T(5))
{
	for (size_t i = 0; i < N; i++)
		arr[i] *= t;
}

//za1. wariant2. dwa funktory
template<typename RT = double, typename T = int>
struct func
{
	RT operator()(const T& a, const T& t)
	{
		return(RT)a / t;
	}
};

template<typename RT = double, typename T = int>
struct func2
{
	RT operator()(const T& a, const T& t)
	{
		return(RT)a* t;
	}
};


template<typename RT = double, typename T = int, class Func = func<RT, T>>
RT SetGeometr(T * arr, std::size_t N = 10, T t = T(5), Func f = func < RT, T>())
{
	RT res = 0;
	for (std::size_t i = 0; i < N; i++)
		res += f(arr[i], t);
	return pow(abs(res), 1.0 / N);
}

//zad2. funktor i uogolniony algorytm
template<class T>
class Positive
{
public:
	bool operator()(const T& t)
	{
		return bool(t > T(0));
	}
};
template<class InputIterator, class OutputIterator, class Pridicate>
void reverse_copy_if(InputIterator first, InputIterator last, OutputIterator result, Pridicate Functor)
{
	for (; last >= first; last--)
		if (Functor(*last))
		{
			*result = *last; result++;
		}
}
int main()
{
	int iArray[] = { 1,2,3,4,5,6,7,8,9,10 };
	double dArray[] = { 1.2345,2.2355,3.2553,4.555,5.555,6.777,7.888,8.444 };

	//wywolanie z ustawieniami domyslnymi
	F(iArray);
	cout << "\nTablica typu int:\n"; printArray(iArray, sizeof(iArray) / sizeof(int));
	//wywolanie z parametrami
	F(dArray, 7u, 6.7);
	cout << "\nTablica typu double:\n"; printArray(dArray, sizeof(dArray) / sizeof(double));

	//zad1.wariant2. przyklad sparametyrowaznej funkcji, ktora wykonuje dzialanie
	//na dowlonej tablicy i zwraca liczbe dowolnego typu

	//wywoalnie z ustawieniami domyslnymi
	cout << "\ndomyslnie, func:\n" << SetGeometr(iArray) << endl;
	//wywolanie z prametrami i funktorem fun2
	cout << "\nfunc2:\n" << SetGeometr<double, double, func2<double,
		double>>(dArray, sizeof(dArray) / sizeof(double), 12.0, func2<double, double>()) << endl;

	//zad2. funktor i uogolniony algorytm
	int res[10] = { 0 };
	reverse_copy_if(iArray, iArray + 10, res, Positive<int>());
	printArray(res, 10);

	//zad2. funktor i uogolniony algorytm
	double res2[7] = { 0.0 };
	reverse_copy_if(dArray, dArray + 7, res2, Positive<double>());
	printArray(res2, 7);

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
