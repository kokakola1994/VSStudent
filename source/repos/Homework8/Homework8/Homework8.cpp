// Homework8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <new>
#include <algorithm>
using namespace std;

template <typename T>
void printArray(const T* array, int count)
{
	static_assert (is_pod<T>::value, "type T mucie byc prostym");
	for (int ix = 0; ix < count; ix++)
		cout << array[ix] << " ";
	cout << endl;
	template < typename T = int>
	void F(T * arr, size_t N = 10, T t = T(5))
	{
		for (size_t i = 0; i < N; i++)
			arr[i] *= t;
	}


}

int main()
{

}

//template <class T>
//class DynArray {
//protected:
//	int size;
//	T* DynamicArray;
//public:
//	DynArray() {};
//	DynArray(size_t s) : size(s) {
//		DynamicArray = new T[size];
//		for (int i = 0; i < size; i++) {
//			cout << "Element " << i << ": ";
//			cin >> DynamicArray[i];
//
//		}
//	}
//	//Sort Array
//	void Sort() {
//		sort(DynamicArray, DynamicArray + size);
//		for (int i = 0; i < size; i++) {
//			cout << DynamicArray[i] << endl;
//		}
//	}
//
//	//Clear Heap
//	~DynArray() {
//		delete[]DynamicArray;
//	}
//};
//
//int main() {
//	int sizeOfArry;
//	cout << "Enter size of Array: ";
//	cin >> sizeOfArry;
//
//	//Use as an int Array;
//	DynArray<int> intArray = DynArray<int>(sizeOfArry);
//	intArray.Sort();
//}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
