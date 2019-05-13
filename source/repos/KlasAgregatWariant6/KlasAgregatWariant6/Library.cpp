#include "Library.h"



unsigned Library::n = 0;
Library::Library()
{
	f = new KartaCzytelnika[N];
	n = 0;
}


Library::~Library()
{
	delete[] f;
}
void Library::Printall() const
{
	cout << "==================================================================================" << endl;
	cout.setf(ios::left);
	cout.width(20);
	cout << "Numer";
	cout.width(20);
	cout << "Adres";
	cout.width(20);
	cout << "IiN";
	cout.width(20);
	cout << "Data" << endl;
	cout << "==================================================================================" << endl;
	for (unsigned i = 0; i < n; i++)
		f[i].Printbook();
	cout << "==================================================================================" << endl;

}

void Library::Sort(bool(*cmp)(KartaCzytelnika&, KartaCzytelnika&))
{
	KartaCzytelnika tmp;
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

void Library::AddCzytelnik()
{
	
	f[n].InputCzytelnik();
	n++;
}

bool Library::Dell(unsigned j)
{
	if (n == 0) { cout << "Czytelnika niema...."; return false; }
	else {
		;
		if (j >= n) { cout << "Numer nie istnieje..."; system("pause"); return false; }
		else
		{
			for (unsigned i = j; i < n; i++)
				f[i] = f[i + 1];
			n--;
			return true;
		}
	}
}
KartaCzytelnika& Library::operator[](const unsigned& index)
{
	return f[index];

}
const KartaCzytelnika& Library:: operator[](const unsigned& index) const
{
	return f[index];
}