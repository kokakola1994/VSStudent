#pragma once
#include "Book.h"

#include "Biblio.h"

class Menu

{

public:

	Menu(Biblio&);

	void GeneralMenu(Biblio&);

	void MenuFind(Biblio&);

	void MenuSort(Biblio&);

	void MenuCorect(Biblio&);

	void m();

	~Menu();

};

