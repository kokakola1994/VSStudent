#include "Menu.h"
#include "KartaCzytelnika.h"
#include "Library.h"

Menu::~Menu()

{

}

Menu::Menu(Library& b)

{

	GeneralMenu(b);

}

void Menu::m()

{

	system("cls");

	cout << " 0.Exit " << endl;

	cout << " 1. Numer czytelnika " << endl;

	cout << " 2. Adres " << endl;

	cout << " 3. Imie i Nazwisko " << endl;

	cout << " 4. Rok waznosti konta " << endl;

}

void Menu::GeneralMenu(Library& b)

{

	int g = 1;



	while (g != 0)

	{

		system("cls");

		cout << " [0] Exit " << endl;

		cout << " [1] Dodaj Czytelnika " << endl;

		cout << " [2] Usun Czytelnika " << endl;

		cout << " [3] Print " << endl;

		cout << " [4] Find " << endl;

		cout << " [5] Korekcja polia " << endl;

		cout << " [6] Sort " << endl;

		cin >> g;



		switch (g)

		{

		case 1: {

			b.AddCzytelnik(); 

			break;

		};

		case 2: { cout << "Wprowadz numer zapisu 0.." << b.GetN() - 1 << endl;

			int j; cin >> j;

			if (b.Dell(j)) { cout << "Operacja zakonczona..."; system("pause"); }

			else

			{

				cout << "Blad operacji..." << endl; system("pause");

			}

		}

		case 3: { if (b.GetN() == 0) {

			cout << "Czytelnikow niema..."; system("pause");

			break;

		}

				else

		{

			b.Printall();

			system("pause");

			break;

		};

		}

		case 4: {MenuFind(b); break; };

		case 5: {MenuCorect(b); break; };

		case 6: {MenuSort(b); break; };

		}

	}

}

void Menu::MenuCorect(Library& b)

{

	int g = 1;

	unsigned k = 0;

	int num = 0;

	string name;

	bool flag = true;

	while (g != 0)

	{

		m();

		cout << "Wprowadz numer zapisu 0.." << b.GetN() - 1 << endl;

		cin >> k;

		if (k >= b.GetN()) {

			cout << "Nieprawidlowy numer..."; system("pause");

			break;

		}

		else

		{

			b[k].Printczytelnik();

			cout << "Wprowadz numer pola do zastapienia..." << endl;

			cin >> g;

			switch (g)

			{

			case 0: break;

			case 1: {cout << "Wprowadz numer do zastapienia..." << endl; cin >> num; b[k].Setnumer(num);  b.Printall();

				system("pause"); break; }

			case 2: {cout << "Wprowadz Adres do zastapienia..." << endl; cin >> name; b[k].Setadres(name);  b.Printall();

				system("pause"); break; }

			case 3: {cout << "Wprowadz Imie i Nazwisko do zastapienia..." << endl; cin >> name; b[k].Setiin(name);  b.Printall();

				system("pause"); break; }

			case 4: {cout << "Wprowadz rok waznosti do zastapienia..." << endl; cin >> num; b[k].Setdata(num);  b.Printall();

				system("pause"); break; }

			}

		}

	}

}

void Menu::MenuSort(Library& b)

{

	int g = 1;

	int num = 0;

	bool flag = true;

	while (g != 0)

	{

		m();

		cin >> g;

		switch (g)

		{

		case 1: b.Sort(Library::Cmpnumer); { b.Printall(); system("pause");

			break; }

		case 2: b.Sort(Library::Cmpadres); { b.Printall(); system("pause");

			break; }

		case 3: b.Sort(Library::Cmpiin); { b.Printall(); system("pause");

			break; }

		case 4: b.Sort(Library::Cmpdata); { b.Printall(); system("pause");

			break; }

		}

	}

}

void Menu::MenuFind(Library& b)

{

	int g = 1;

	int num = 0;

	string name;

	bool flag = true;

	while (g != 0)

	{

		m();

		cin >> g;

		switch (g) {

		case 1:

			cout << "Wprowadz numer... ";

			cin >> num;

			flag = true;

			for (unsigned i = 0; i < b.GetN(); i++)

				if (b[i].Getnumer() == num) {

					b[i].Printczytelnik(); flag = false;

				}

			if (flag) cout << "Pole nie znalezono.." << endl;

			system("pause");

			break;

		case 2:

			cout << "Wprowadz adres... ";

			cin >> name;

			flag = true;

			for (unsigned i = 0; i < b.GetN(); i++)

				if (b[i].Getadres() == name) {

					b[i].Printczytelnik(); flag = false;

				}

			if (flag) cout << "Pole nie znalezono.." << endl;

			system("pause");

			break;

		case 3:

			cout << "Wprowadz Imie i Nazwisko... ";

			cin >> name;

			flag = true;

			for (unsigned i = 0; i < b.GetN(); i++)

				if (b[i].Getiin() == name) {

					b[i].Printczytelnik(); flag = false;

				}

			if (flag) cout << "Pole nie znalezono.." << endl;

			system("pause");

			break;

		case 4:

			cout << "Wprowadz rok waznosti... ";

			cin >> num;

			flag = true;

			for (unsigned i = 0; i < b.GetN(); i++)

				if (b[i].Getdata() == num) {

					b[i].Printczytelnik(); flag = false;

				}

			if (flag) cout << "Pole nie znalezono.." << endl;

			system("pause");

			break;





		}

	}

}