// Egzamin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "A.h"
#include "B.h"

using namespace std;

template <typename Type, int rozmiar = 10> 
class Stos
{
	Type rep[rozmiar];
	int top;
public:
	Stos() { top = 0; };
	bool isempty() { return top == 0; }
	bool isfull() { return top == rozmiar; }
	bool push(const Type& item)
	{
		if (top < rozmiar)
		{
			rep[top++] = item;
			return true;
		}
		else return false;
	}
	bool pop(Type& item)
	{
		if (top > 0)
		{
			item = rep[--top];
			return true;
		}
		else return false;
	}
};


int main()
{
	
	Stos<int, 5> s, t; int k;
	for (int i = 0; i < 4; i++) s.push(i);
	t = s; t.push(5); s.pop(k);
	cout << k << endl;
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
