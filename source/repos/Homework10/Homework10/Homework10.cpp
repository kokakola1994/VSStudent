// Homework10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//lista dwukierunkowa

template< typename T >

class List

{

protected:

	//klasa zagnie?d?ona: w?ze? 

	class Item

	{

		T value;

		Item* n, * p;

	public:

		Item(const T& v) : n(NULL), p(NULL), value(v) {}

		~Item() {}

		Item* next(void) const { return n; }

		Item* prev(void) const { return p; }

		void next(Item* v) { n = v; }

		void prev(Item* v) { p = v; }

		T& get(void) { return value; }

	};

public:

	//klasa zagnie?d?ona: iterator 

	class Iterator

	{

		Item* pos;

		friend class List;

	public:

		Iterator(Item* p = NULL) : pos(p) {} //inicjalizacja wska?nikiem

		Iterator(const Iterator& it) : pos(it.pos) {} //konstruktor kopiuj?cy

		~Iterator() {}

		Item* get_pos() { return pos; }
		void set_pos(Item* it) { pos = it; }
		bool operator == (const Iterator& it) const

		{

			return pos == it.pos;

		}

		bool operator != (const Iterator& it) const

		{

			return pos != it.pos;

		}

		Iterator operator++()

		{

			if (!pos) throw "Invalid iterator";

			pos = pos->next();

			return Iterator(pos);

		}

		Iterator operator++(int)

		{

			if (!pos) throw "Invalid iterator";

			Iterator it(pos);

			pos = pos->next();

			return it;

		}

		Iterator operator--()

		{

			if (!pos) throw "Invalid iterator";

			pos = pos->prev();

			return Iterator(pos);

		}

		Iterator operator--(int)

		{

			if (!pos) throw "Invalid iterator";

			Iterator it(pos);

			pos = pos->prev();

			return it;

		}

		T& operator*() const

		{

			if (!pos) throw "Invalid iterator";

			return pos->get();

		}

	};

protected:

	Item* head, * tail; //specjalne w?z?y: g?owa i ogon

public:

	List() : head(NULL), tail(NULL) {}//domy?lny konstruktor

	List(const List& v)  //konstruktor kopiuj?cy

	{

		for (Item* it = v.head; it; it = it->next())

			push_back(it->get());

	}

	List(Iterator first, Iterator last) : head(NULL), tail(NULL)

	{

		for (Iterator it = first; it != last; ++it) {

			push_back(*it);

		}

	}

	~List()

	{

		clear();

	}

	void clear(void)

	{

		while (head)

		{

			Item* it = head;

			head = head->next();

			delete it;

		}

		head = tail = NULL;

	}

	void push_back(const T & v)

	{

		Item* n = new Item(v);

		if (head == NULL)

		{

			head = tail = n;

		}

		else

		{

			tail->next(n);

			n->prev(tail);

			tail = n;

		}

	}

	Iterator begin() const

	{

		Iterator it(head);

		return it;

	}

	Iterator end(void) const

	{

		return Iterator(tail->next());

	}

	Iterator back(void) const

	{

		return Iterator(tail);

	}

	friend ostream& operator << (ostream & s, const List<T> & l)

	{

		for (Item* it = l.head; it; it = it->next())

			std::cout << " " << it->get();

		s << endl;

		return s;

	}

};



template <class T = int >

class Pair

{

	T x, y;

public:

	Pair(T x = 0, T y = 0) :x(x), y(y) {};

	friend ostream& operator << (ostream& s, const Pair<T>& p)

	{

		s << " (" << p.x << ":" << p.y << ") ";

		return s;

	}

};



int main() {
	vector<int> myvector;
	for (unsigned i = 1; i < 15; i++) myvector.push_back(i);
	List <Pair<double>>L00;

	for (unsigned i = 0; i < 5; i++)

		L00.push_back(Pair<double>(i / 10.0, i / 100.0));
	
	cout << L00;
	List<int> L1;

	for (unsigned i = 0; i < 15; i++)

		L1.push_back(i);
		cout << L1;

	List<int>::Iterator b = L1.begin(), e = L1.end();
	List<int> L2(b, e);	
	cout << L2;
	std::reverse(myvector.begin(), myvector.end());
	cout << "function reverse:";
	for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';

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

template<class reverseIterator>
void reverse(reverseIterator first, reverseIterator last)
{
	while ((first != last) && (first != --last)) {
		iter_swap(first, last);
		++first;
	}
}