// Shablony.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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
void F(T* arr, size_t N = 10, T t = T(5))
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
int main()
{
  
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
