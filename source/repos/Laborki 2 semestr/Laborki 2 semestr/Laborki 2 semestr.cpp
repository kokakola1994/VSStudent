// Laborki 2 semestr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "car.h"
#include "Lorry.h"

using namespace std;


//Laborka N1
/*
struct Ulamek {
	int first, second;
	void Print();
} u1, u2 = { 1, 2 };

void Ulamek::Print() {
	cout << first << "\\" << second << endl;
}

int main() {
	Ulamek one = { 1, 2 }, one1;
	one1.first = -1;
	one1.second = 3;
	u1.Print();
	u2.Print();
	one.Print();
	one1.Print();
	Ulamek *two = new Ulamek{ 1, 3 };
	delete two;
	return 0;
}
*/

//Samodzielnie do Laborki N1

/*struct Time {
	public:
	int first;
	int second;
	void Print();
	int Minutes();
	//void UpTime(const Time&);
} g1, m1 = {24,60};

void Time::Print()
{
	cout << first << "\n" << second <<endl;
}

int Time::Minutes()
{
	int minutes = first*60;
	return minutes;

}

/*void Time::UpTime(const Time)
{
	
}

void UpTime(const Time&, const Time&)
{

}

int main()
{
	int first, second;
	cin >> first;
	cin >> second;
	Time godzina = { }, godzina1;
	godzina.first = first;
	godzina1.second = second;
	
	if (first >= 24)
		cout << "stop" << endl;
	if (second >= 60)
		cout << "stop" << endl;
	system("pause");
	return 0;
}*/

//Laboratorium N2

void F()
{
	Car a, b("Opel", 3), c(a), g=b;
	a.Print();
	b.Print();
}
void copy(Car*a)
{
	//a.Print();
	a->SetName("Szkoda");
	a->SetAge(1);

}

int main()
{
	Lorry*a = new Lorry;
	a->Print();
	delete a;
	Lorry one, one1;
	one.SetAge(12);
	one.SetName("Szkoda");
	one.SetWlascicel("Racibor");
	one.Print();
	Lorry*two = new Lorry("Opel", 12, "Nowak");
	two->Print();
	delete two;
	Lorry*four = new Lorry("Volvo", 1, "Sasza");
	Lorry*tree = new Lorry(one)//konstruktor copy
	one1 = one;
	one1.Print();
	two->Print();
	tree->Print();
	delete two;
	delete tree;

//Car a,b ("Opel",3), c(b);
//a.Print();
//b.Print();
//Change(&a);
//a.Print();
//c = b = a;
//c.Print();
//b.Print();
system("pause");
return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
