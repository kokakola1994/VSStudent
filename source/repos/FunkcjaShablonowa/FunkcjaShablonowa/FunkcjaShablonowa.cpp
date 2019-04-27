// FunkcjaShablonowa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
//#include "stdafx.h"

using namespace std;

template <typename T>
void printArray(const T*array, int count)
{
	static_assert (is_pod<T>::value, "type T mucie byc prostym");
	for (int ix = 0; ix < count; ix++)
		cout << array[ix] << " ";
	cout << endl;
	template < typename T = int >
	void F(T*arr, size_t N = 10, T t = T(5))
	{
		for (size_t i = 0; i < N; i++)
			arr[i] *= t;
	}

	template < typename RT = double, typename T = int >
	struct func
	{
		RT operator () (const T& a, const T& t)
		{
			return (RT)a / t;
		}
	};
	template <typename RT = double, typename T = int >
	struct func2
	{
		RT operator () (const T& a, const T& t)
		{
			return (RT)a * t;
		}
	};
}

template <typename RT = double, typename T = int, class Func = func<RT,T> >
RT serGeometr(T*arr, size_t N = 10, T t = T(5), Func f = func<RT, T>())
{
	RT res = 0;
	for (size_t i = 0; i < N; i++)
		res += (arr[i], t);
	return pow(abs(res), 1.0 / N);
}
template <class T>
class Positive
{
public:
	bool operator() (const T& t)
	{
		return bool(> T(0));

	}
};
template <class InputIterator, class OutputIterator, class Pridicate>
void reverse_copy_if(InputIterator first, InputIterator last, OutputIterator result, OutputIterator Functor)
{
	for(; last >= first; last --)
		if (Functor(*last))
		{
			*result = *last; result++;
		}
}

int main()
{
	int iArray[] = { 1,2,3,4,5,6,7,8,9,10 };
	double dAraay[] = { 1.23,2.23,3.23,4,23,5.23,6.67,7.78,8.89,9.89 };
	F(iArray);
	cout << "\n Tablica typu int; \n"; printArray(iArray, sizeof(iArray) / sizeof(int));
	F(dAraay, 7.6, 6.7);
	cout << "\n Tablica typu double; \n"; printArray(dArray, sizeof(dAraay) / sizeof(double));
	cout << "domyslnie, func: " << serGeometr(iArray) << endl;
	cout << "func 2: " << serGeometr<double, double, func<double, double>>(dAraay, sizeof(dAraay) / sizeof(double), 12.0, func2<double, double>())<< endl;

	int res[10] = { 0 };
	reverse_copy_if(iArray, iArray + 10, res, Positive<int>())
		printArray(res, 10);

	double res2[7] = { 0.0 };
	reverse_copy_if(dArray, dArray + 7, res, Positive<double>())
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
