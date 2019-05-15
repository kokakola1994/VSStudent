// ShablonyVariant6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>
#include <iostream>
using namespace std;

template <typename T>
void printArray(const T* array, int count) //print array funktion
{
	static_assert(std::is_pod<T>::value, "typ T mucie byc prostym.");
	for (int ix = 0; ix < count; ix++)
		cout << array[ix] << "   ";
	cout << endl;
}
template<typename T = int> //function with parametr N - size array, Tt - type array int

void F(T * arr, size_t N = 10, T t = T(1))
{
	for (size_t i = 0; i < N; i++)
		arr[i] *= t;
}
template<typename RT = double, typename T = int> //two func
struct func
{
	RT operator()(const T& a, const T& t)
	{
		return(RT)a - t;
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
template<typename RT = double, typename T = int, class Func = func<RT, T>> //template for log10 "Wariant 6" 
RT Logarythm(T* arr, size_t N = 10, T t = T(1), Func f = func < RT, T>())
{
	RT res = 0;
	for (size_t i = 0; i < N; i++)
		res += f(arr[i], t);
	return log10(abs(res));
}
template<class T>
class Positive
{
public:
	bool operator()(const T& t)
	{
		return bool(t > T(0));
	}
};


//template <class T>
//void scal(int tab[], int lewy, int srodek, int prawy)
//{
//	int i, j;
//
//	//zapisujemy lewa czesc podtablicy w tablicy pomocniczej
//	for (i = srodek + 1; i > lewy; i--)
//		T[i - 1] = tab[i - 1];
//
//	//zapisujemy prawa czesc podtablicy w tablicy pomocniczej
//	for (j = srodek; j < prawy; j++)
//		T[prawy + srodek - j] = tab[j + 1];
//
//	//scalenie dwoch podtablic pomocniczych i zapisanie ich 
//	//we wlasciwej tablicy
//	for (int k = lewy; k <= prawy; k++)
//		if (T[j] < T[i])
//			tab[k] = T[j--];
//		else
//			tab[k] = T[i++];
//}
int main()
{
	int iArray[] = { 1,2,3,4,5,6,7,8,9,10 };
	double dArray[] = { 1.2345,2.2355,3.2553,4.555,5.555,6.777,7.888,8.444 };
	F(iArray);
	cout << "\nTablica typu int:\n"; printArray(iArray, sizeof(iArray) / sizeof(int));
	F(dArray);
	cout << "\nTablica typu double:\n"; printArray(dArray, sizeof(dArray) / sizeof(double));
	cout << "\ndomyslnie, func:\n" << Logarythm(iArray) << endl;
	cout << "\nfunc2:\n" << Logarythm<double, double, func2<double,
		double>>(dArray, sizeof(dArray) / sizeof(double), 12.0, func2<double, double>()) << endl;
	int res[10] = { 0 };
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
