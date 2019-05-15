// NpisanieWyjantkow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Stack;
class StackEmpty
{
private:
	Stack* stack;
public:
	StackEmpty(Stack *p): stack(p){}
	Stack* GetPtr() {
		return stack;
	}
};
class StackFull
{
private:
	Stack* stack;
	int n;
public: 
	StackFull(Stack*p,int i): stack (p), n(i) {}
	Stack* GetPtr()
	{
		return stack;
	}
	int GetValue() {
		return n;
	}
};
class Stack
{
private:
	enum {SIZE = 4};
	int stack[SIZE];
	int* cur;
public:
	Stack() { cur = stack; }
	~Stack(){}
	int Push(int n);
	int Pop();
	int IsEmpty() { return cur == stack; }
	int operator >> (int& s)
	{
		s = Pop();
		return s;
	}
	int operator << (int s) {
		return Push(s);
	}
};
int Stack::Push(int n)
{
	if (cur - stack < SIZE)
	{
		*cur++ = n;
		return n;
	}
	else
		throw StackFull(this, n);
}
int Stack::Pop()
{
	if
		(cur != stack)
		return *--cur;
	else
		throw StackEmpty(this);
}

int main()
{
	Stack s;
	int n;
	try
	{
		s << 1;
		s << 2;
		s << 3;
		s << 4;
		s << 5;
	}
		catch (StackFull s)
		{
			printf("Attempt to put value %d to the full stack at the adress %p \n");
		}
		try
		{
			s >> n;
			printf("%d\n", n);
			s >> n;
			printf("%d\n", n);
			s >> n;
			printf("%d\n", n);
			s >> n;
			printf("%d\n", n);
			s >> n;
			printf("%d\n", n);
		}
		catch (StackEmpty s)
		{
			printf("Attempt to put value %d to the full stack at the adress %p \n", s.GetPtr());

		}
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
