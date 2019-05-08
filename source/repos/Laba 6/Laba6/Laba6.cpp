#include "pch.h"
#include "Shape.h"
#include "Circle_Storable.h"
#include "Triangle_Storable.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <math.h>
#ifndef MAX
# define MAX 100
#endif

int main()

{

	Shape* arr[MAX];

	int count = 0;

	for (unsigned i = 0; i < MAX; i++)

	{

		arr[i] = NULL;

	}

	int j = 0, ch;

	do

	{

		std::cout

			<< " <1> - Add triangle \n"

			<< " <2> - Add Rectanglre \n"

			<< " <3> - Add Circle \n"

			<< " <4> - Print  all element and your's metods  \n"

			<< " <5> - Save  all element in file  \n"

			<< " <6> - Load all element of file  \n"

			<< " <7> - Clear all element  \n"

			<< " <8> - Exit \n";

		std::cin >> ch;       //  menu

		switch (ch)

		{

		case 1:

			std::cout << "Enter the number of new triangle - \n";

			std::cin >> j;

			for (int i = count; i < count + j; i++)

			{

				arr[i] = new Triangle(1 + rand() % MAX, 1 + rand() % MAX, 1 + rand() % MAX);

				arr[i]->print();



			}

			count += j;

			break;

		case 2:

			std::cout << "Enter the number of new rectangle - \n";

			std::cin >> j;

			for (int i = count; i < count + j; i++)

			{

				arr[i] = new Rectangle(1 + rand() % MAX, 1 + rand() % MAX);

				arr[i]->print();

			}

			count += j;

			break;

		case 3:

			std::cout << "Enter the number of new circle - \n";

			std::cin >> j;

			for (int i = count; i < count + j; i++)

			{

				arr[i] = new Circle(1 + rand() % MAX);

				arr[i]->print();

			}

			count += j;

			break;

		case 4:

			for (int i = 0; i < count; i++)

			{

				arr[i]->print();

				//arr[i]->pole();

				//arr[i]->objetnosc();

			}

			break;



		case 5:

		{

			std::ofstream f;

			f.open("shapes.txt");

			store(f, arr);

			f.close();

		}

		break;

		case 6:

		{

			std::ifstream f;

			f.open("shapes.txt");

			count = load(f, arr);

			f.close();

		}

		break;

		case 7:

			clear(arr);

			count = 0;

			break;

		}

	} while (ch != 8);



	clear(arr);

	system("pause");

	return 0;

}

	//HWND hwnd = GetConsoleWindow(); HDC hdc = GetDC(hwnd);
	//Shape* shapes[10];
	//int r = 1;
	//cout << "Mode 1 -> Read || Mode 2 -> Write" << endl;
	//cin >> r;

	//try {
	//	if (r == 2) {
	//		shapes[0] = new Circle_Storable("c1.txt", Storable::READ);
	//		shapes[1] = new Triangle_Storable("t1.txt", Storable::READ);
	//	}
	//	else {
	//		shapes[0] = new Circle_Storable("c1.txt", Storable::WRITE, 100, 100, 30);
	//		shapes[1] = new Triangle_Storable("t1.txt", Storable::WRITE, 10, 10, 20, 100, 50, 120);
	//	}
	//}
	//catch (const char *s) {
	//	printf("IMPSIBLE TO OPEN FILE '%s", s);
	//}

	//for (int i = 0; i < Shape::GetCount(); i++) {
	//	if (r == 2)
	//		dynamic_cast<Storable*>(shapes[i])->Read();
	//	else
	//		dynamic_cast<Storable*>(shapes[i])->Write();
	//}
	//system("slc");
	//for (int i = 0; i < Shape::GetCount(); i++)
	//	shapes[i]->Draw(hwnd, hdc);
	//system("pause");
	//for (int i = 0; i < Shape::GetCount(); i++)
	//	delete shapes[i];

	//system("pause");
	//return 0;}
