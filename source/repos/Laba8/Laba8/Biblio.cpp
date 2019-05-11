#include "Biblio.h"


unsigned Biblio::n = 0;
Biblio::Biblio()
{
	f = new Book[N];
	n = 0;
}


Biblio::~Biblio()
{
	delete[] f;
}
void Biblio::Printall() const
{
	cout << "=========================================" << endl;
	cout.setf(ios::left);
	cout.width(5);
	cout << "Kod";
	cout.width(15);
	cout << "Author";
	cout.width(30);
	cout << "Title";
	cout.width(4);
	cout << "Year" << endl;
	cout << "=========================================" << endl;
	for (unsigned i = 0; i < n; i++)
		f[i].Printbook();
	cout << "=========================================" << endl;

}

void Biblio::Sort(bool(*cmp)(Book&, Book&))
{
	Book tmp;
	unsigned i, j, maxi;
	for (i = 0; i < n; i++)
	{
		maxi = i;
		for (j = 0; j < n; j++)
			if ((*cmp)(f[j], f[maxi]))
				maxi = j;
		if (maxi != i)
		{
			tmp = f[i];
			f[i] = f[maxi];
			f[maxi] = tmp;
		}
	}
}
void Biblio::AddBook()
{
	f[n].Inputbook;
	n++;
}
bool Biblio::Dell(unsigned j)
{
	if (n == 0) { cout << "Ksianzek niema...."; return false; }
	esle
	{
		for (unsigned i = j; i < n; i++)
		f[i] = f[i + 1];
	n--;
	return true;
	}
}
Book& Biblio::operator[](const unsigned& index)
{
	return f[index];

}
const Book& Biblio:: operator[](const unsigned& index) const
{
	return f[index];
}