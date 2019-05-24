// Shablony.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iterator>
#include <algorithm>
#include <utility>
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
template <typename T1, typename T2>
void Logarythm(const T1* iArray, const T2* dArray, int size) {
	for (int i = 0; i < size; i++)
		cout << "| " << "|" << iArray[i] << " - log10(" << dArray[i] << ")| | ";
	cout << "\n\n";

	for (int i = 0; i < size; i++)
		cout << "| " << log10(iArray[i] - log10(dArray[i])) << " | ";
	cout << "\n\n";
}
//zad1. wariant1. przyklad sparametryzowanej funkcji
template<typename T = int>
void F(T* arr, size_t N = 10, T t = T(5))
{
	for (size_t i = 0; i < N; i++)
		arr[i] *= t;
}
template<typename I, typename BI>
void mergeTogether(I begin, I mid, I end, BI beginBuffer)
{
	I  low = begin;
	I  hig = mid;
	BI buf = beginBuffer;
	while (low < mid && hig < end) {
		if (*low <= *hig) {
			std::iter_swap(low, buf);
			++low;
		}
		else {
			std::iter_swap(hig, buf);
			++hig;
		}
		++buf;
	}
	std::move(low, mid, buf);
	std::move(hig, end, buf);

	std::size_t size = std::distance(begin, end);
	std::move(beginBuffer, std::next(beginBuffer, size), begin);
}

template<typename I, typename BI>
void mergeSortUsingBuffer(I begin, I end, BI beginBuffer)
{
	std::size_t size = std::distance(begin, end);
	if (size < 2) {
		return;
	}
	std::size_t split = size / 2;
	I           mid = std::next(begin, split);
	BI          midBuffer = std::next(beginBuffer, split);

	mergeSortUsingBuffer(begin, mid, beginBuffer);
	mergeSortUsingBuffer(mid, end, midBuffer);

	mergeTogether(begin, mid, end, beginBuffer);
}

template<typename I>
void mergeSort(I begin, I end)
{
	using       ValueType  = typename std::iterator_traits<I>::value_type;
	std::size_t size = std::distance(begin, end);
	std::vector<ValueType>    buffer(size);

	mergeSortUsingBuffer(begin, end, std::begin(buffer));
}


//template<typename T1, typename T2, typename T3, typename T4>
//void  merge(T1*arr[], T2* l, T3* m, T4* r)
//{
// n1 = m - l + 1;
// n2 = r - m;
//
///* create temp arrays */
// L[n1], R[n2];
//
///* Copy data to temp arrays L[] and R[] */
//for (int i = 0; i < n1; i++)
//	L[i] = arr[l + i];
//for (int j = 0; j < n2; j++)
//	R[j] = arr[m + 1 + j];
//
///* Merge the temp arrays back into arr[l..r]*/
//i = 0; // Initial index of first subarray 
//j = 0; // Initial index of second subarray 
//k = l; // Initial index of merged subarray 
//while (i < n1 && j < n2)
//{
//	if (L[i] <= R[j])
//	{
//		arr[k] = L[i];
//		i++;
//	}
//	else
//	{
//		arr[k] = R[j];
//		j++;
//	}
//	k++;
//}
//
///* Copy the remaining elements of L[], if there
//   are any */
//while (i < n1)
//{
//	arr[k] = L[i];
//	i++;
//	k++;
//}
//
///* Copy the remaining elements of R[], if there
//   are any */
//while (j < n2)
//{
//	arr[k] = R[j];
//	j++;
//	k++;
//}
//}
//template<typename T1, typename T2, typename T3>
//void mergeSort(T1* arr[], T2* l, T3* r)
//{
//	if (l < r)
//	{
//		// Same as (l+r)/2, but avoids overflow for 
//		// large l and h 
//		int m = l + (r - l) / 2;
//
//		// Sort first and second halves 
//		mergeSort(arr, l, m);
//		mergeSort(arr, m + 1, r);
//
//		merge(arr, l, m, r);
//	}
//}
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
	int iArray[10] = { 1,8,15,11,5,6,12,8,9,10 };
	double dArray[10] = { 1.1,2.3,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1 };
	F(iArray);
	F(dArray);
	cout << "First array(int)    : ";	printArray(iArray, sizeof(iArray) / sizeof(int));
	cout << "Second array(double): "; printArray(dArray, sizeof(dArray) / sizeof(double));
	cout << "Fisrt Array[x] - Second Array[x]: "; Logarythm(iArray, dArray, sizeof(iArray) / sizeof(int));
	vector<int> a = { 3, 0, 7, 5, 7, 8, 3, 1 };
	mergeSort(begin(iArray), end(iArray));
	copy(begin(iArray), end(iArray),
		ostream_iterator<int>(cout, ", "));
	cout << "\n";
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
