#include "Menu.h"



Menu::~Menu()

{
}

Menu::Menu(Biblio& b)

{
	GeneralMenu(b);
}

void Menu::m()

{
	system("cls");

	cout << " 0.Exit " << endl;

	cout << " 1. Kode " << endl;

	cout << " 2. Autor " << endl;

	cout << " 3. Title " << endl;

	cout << " 4. Year " << endl;

}

void Menu::GeneralMenu(Biblio& b)

{

	int g = 1;



	while (g != 0)

	{

		system("cls");

		cout << " 0.Exit " << endl;

		cout << " 1. Dodaj book " << endl;

		cout << " 2. Usun book " << endl;

		cout << " 3. Print " << endl;

		cout << " 4. Find " << endl;

		cout << " 5. Korekcja polia " << endl;

		cout << " 6. Sort " << endl;

		cin >> g;



		switch (g)

		{

		case 1: {

			b.AddBook();

			break;

		};

		case 2: { cout << "Wprowadz numer zapisu 0.." << b.GetN() - 1 << endl;

			int j; cin >> j;

			if (b.Dell(j)) { cout << "Blad operacji..."; system("pause"); }

			else

			{

				cout << "Operacja zakonczona..." << endl; system("pause");

			}

		}

		case 3: { if (b.GetN() == 0) {

			cout << "Ksiazek niema..."; system("pause");

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

void Menu::MenuCorect(Biblio& b)

{

	int g = 1;

	unsigned      k = 0;

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

			b[k].Printbook();

			cout << "Wprowadz numer pola do zastapienia..." << endl;

			cin >> g;

			switch (g)

			{

			case 0: break;

			case 1: {cout << "Wprowadz kod do zastapienia..." << endl; cin >> num; b[k].Setcode(num);  b.Printall();

				system("pause"); break; }

			case 2: {cout << "Wprowadz autora do zastapienia..." << endl; cin >> name; b[k].Setauthor(name);  b.Printall();

				system("pause"); break; }

			case 3: {cout << "Wprowadz title do zastapienia..." << endl; cin >> name; b[k].Settitle(name);  b.Printall();

				system("pause"); break; }

			case 4: {cout << "Wprowadz rok do zastapienia..." << endl; cin >> num; b[k].Setyear(num);  b.Printall();

				system("pause"); break; }

			}

		}

	}

}

void Menu::MenuSort(Biblio& b)

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

		case 1: b.Sort(Biblio::Cmpcode); { b.Printall(); system("pause");

			break; }

		case 2: b.Sort(Biblio::Cmpauthor); { b.Printall(); system("pause");

			break; }

		case 3: b.Sort(Biblio::Cmptitle); { b.Printall(); system("pause");

			break; }

		case 4: b.Sort(Biblio::Cmpyear); { b.Printall(); system("pause");

			break; }

		}

	}

}

void Menu::MenuFind(Biblio& b)

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

			cout << "Wprowadz kod... ";

			cin >> num;

			flag = true;

			for (unsigned i = 0; i < b.GetN(); i++)

				if (b[i].Getcode() == num) {

					b[i].Printbook(); flag = false;

				}

			if (flag) cout << "Pole nie znalezono.." << endl;

			system("pause");

			break;

		case 2:

			cout << "Wprowadz autor... ";

			cin >> name;

			flag = true;

			for (unsigned i = 0; i < b.GetN(); i++)

				if (b[i].Getauthor() == name) {

					b[i].Printbook(); flag = false;

				}

			if (flag) cout << "Pole nie znalezono.." << endl;

			system("pause");

			break;

		case 3:

			cout << "Wprowadz title... ";

			cin >> name;

			flag = true;

			for (unsigned i = 0; i < b.GetN(); i++)

				if (b[i].Gettitle() == name) {

					b[i].Printbook(); flag = false;

				}

			if (flag) cout << "Pole nie znalezono.." << endl;

			system("pause");

			break;

		case 4:

			cout << "Wprowadz year... ";

			cin >> num;

			flag = true;

			for (unsigned i = 0; i < b.GetN(); i++)

				if (b[i].Getyear() == num) {

					b[i].Printbook(); flag = false;

				}

			if (flag) cout << "Pole nie znalezono.." << endl;

			system("pause");

			break;





		}

	}

}