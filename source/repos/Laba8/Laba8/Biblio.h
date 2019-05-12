#pragma once
#include "Book.h"
class Biblio
{
	static const unsigned N = 10; 
	static unsigned n;
	Book *f;
public:
	unsigned GetN()const { return n; };
	void Printall() const;
	void AddBook();
	
	void Sort(bool(*cmp)(Book&, Book&));
	Book& operator[](const unsigned& index);
	const Book& operator[](const unsigned& index) const;
//	bool Find()const;
	bool Dell(unsigned);
	static bool Cmpcode(Book& a, Book& b)
	{
		return a.Getcode() < b.Getcode();
	}
	static bool Cmpyear(Book& a, Book& b)
	{
		return a.Getyear() < b.Getyear();
	}
	static bool Cmptitle(Book& a, Book& b)
	{
		return a.Gettitle() < b.Gettitle();
	}
	static bool Cmpauthor(Book& a, Book& b)
	{
		return a.Getauthor() < b.Getauthor();
	}
	Biblio();
	~Biblio();
};

