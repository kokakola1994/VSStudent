#include "KartaCzytelnika.h"


KartaCzytelnika::KartaCzytelnika(int nnumer, int ndata, string niin, string nadres)
{
	numer = nnumer;
	data = ndata;
	iin = niin;
	adres = nadres;
}

KartaCzytelnika::~KartaCzytelnika()
{
	}

void KartaCzytelnika::Printbook()
{
	cout.setf(ios::left);
	cout.width(5);
	cout << numer;
	cout.width(15);
	cout << adres;
	cout.width(30);
	cout << iin;
	cout.width(4);
	cout << data << endl;
}

void KartaCzytelnika::InputCzytelnik()
{
	int nnumer = 0, ndata = 0;
	string niin, nadres;
	cout << "Wprowadz Imie i Nazwisko:" << endl;
	cin.ignore();
	getline(cin, niin);
	cout << "Wprowadz datu waznosti konta czytelnika:\n";
	cin >> ndata;
	cout << "Wpisz adres czytelnika:" << endl;
	cin.ignore();
	getline(cin, nadres);
	cout << "Wprowadz numer czytelnika\n";
	cin >> nnumer;
	Setiin(niin);
	Setadres(nadres);
	Setnumer(nnumer);
	Setdata(ndata);
}
