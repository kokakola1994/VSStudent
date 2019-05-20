// WyjantekPerson.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int f(int)
{
	class Name
	{
	public:
		Name(const string& strFirstName, const string& strLastName)
		{
			if (strFirstName == "")
			{
				throw runtime_error("Bland w Name::Name(): Pierwzy parametr nie moze buc pusty");
			}
			if (strLastName == "")
			{
				throw runtime_error("Bland w Name::Name() : Drugi parametr nie moze buc pusty");
			}
			m_firstName = strFirstName;
			m_lastName = strLastName;
			cout << "W konstruktorze Name::Name(): Moje imie jest:" << GetName() << "." << endl;
		}
		~Name()
		{
			cout << "W destruktorze Name::~Name nieczynny:" << GetName() << "." << endl;
		}
		string _GetName()
		{
			return m_firsName + " " + m_lastName;
		}
	private:
		string m_firsName;
		string m_lastName;
	};
	class Person
	{
	public:
		Person(const string& strfirstName, const string& strlasttName)
			try : m_name(strfirstName, strlasttName) {}
		catch (const runtime_error& err)
		{
			cout << "Wyjantek w Person" << endl;
			cout << err.what() << endl;
		}
		~Person()
		{
			cout << "Destruktor dla Person" << n_name.GetName() << endl;
		}
	private:
		Name m_name;
	};
}

int main()
{
	try
	{
		cout << "Proba obiektu Person" << endl;
		cout << " Przesylane parametry: \"John\",\"Smith\"" << endl;
		Person person1("John", "Smith");
	}
	cout << "Test jeden zostal zakonczony!" << endl;
	{
		cout << "Proba obiektu Person" << endl;
		cout << " Przesylane parametry: \"\",\"Smith\"" << endl;
		Person person2("", "Smith");
	}
	cout << "Test jeden zostal zakonczony!" << endl;
}
catch (const runtime_error&)
{
	cout << " Wyjontek opracowany w main()." << endl;
}
    
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
