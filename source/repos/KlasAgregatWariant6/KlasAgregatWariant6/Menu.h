#pragma once
#include "KartaCzytelnika.h"
#include "Library.h"
class Menu

{

public:

	Menu(Library&);

	void GeneralMenu(Library&);

	void MenuFind(Library&);

	void MenuSort(Library&);

	void MenuCorect(Library&);

	void m();

	~Menu();

};

