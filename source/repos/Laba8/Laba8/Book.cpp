#include "Book.h"
#pragma


Book::Book(int ncode, int nyear, string ntitle, string nathor)
{
	code = ncode;
	year = nyear;
	title = ntitle;
	author = nathor;

}
void Book::Printbook(void)
{
	cout.setf(ios::left);
	cout.width(5);
	cout << code;
	cout.width(15);
	cout << author;
	cout.width(30);
	cout << title;
	cout.width(4);
	cout << year << endl;

}
void Book::Inputbook(void)
{
	int ncode = 0, nyear = 0;
	string ntittle, nauthor;
	cout << "Wprowadz tytul ksinzki:" << endl;
	cin.ignore();
	getline(cin, ntittle);
	cout << "Wprowadz rok publikacji:\n";
	cin >> nyear;
	cout << "Wpisz authora ksinzki:" << endl;
	getline(cin, author);
	cout << "Wprowadz kod ksianzki\n";
	cin >> ncode;
	Settitle(ntittle);
	Setauthor(nauthor);
	Setcode(ncode);
	Setyear(nyear);
}


Book::~Book()
{

}
