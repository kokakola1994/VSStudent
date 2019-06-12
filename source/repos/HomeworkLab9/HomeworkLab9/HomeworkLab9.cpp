// HomeworkLab9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

float calSumGP(float b, float q, int n)
{
	float sum;
	sum = (b * (1 - pow(q, n))) / (1 - q);
	try {
		if (q != 1)
			throw q;
		cout << "An exception occurred. q cant be 1:  " << endl;
		return 0;
	}
	catch (float q)
	{

	}
	return sum;
}
class exept;
class exeption
{
private:
	exept* exption;
	float sum;
public:
	exeption(exept*p,int i): exption(p), sum(i){}
	exept* Getptr()
	{
		return exption;
	}
	int GetValue()
	{
		return sum;
	}
};

class exept
{
private:
	float b;
	float q;
	float sum;
	int n;
public:
	exept() { };
	~exept(){}
	float Geosum(float sum);
	float operator << (float& wynik)
	{
		wynik = Geosum(sum);
		return sum;
	}
};
float exept::Geosum(float sum)
{
	sum = (b * (1 - pow(q, n))) / (1 - q);
	if (q != 1)
	{
		sum = (b * (1 - pow(q, n))) / (1 - q);
		return sum;
	}
	else
		throw exeption(this, sum);
	return sum;
}

int main()
{
	exept wynik;
	int n;
	float b;
	float q;
	cout << "Enter the value of b = ";
	cin >> b;
	cout << "Enter the value of q = ";
	cin >> q;
	cout << "Enter the value of n = ";
	cin >> n;
	try
	{
		wynik << q;
	}
	catch (exeption wynik)
	{
		printf("An exception occurred. q cant be 1: %d  %p \n", wynik.GetValue(),wynik.Getptr());
	}
		cout << "Enter the value of b = ";
		cin >> b;	
		cout << "Enter the value of q = ";
		cin >> q;
		cout << "Enter the value of n = ";
		cin >> n;
		cout << "Sum of geometric progression : " << calSumGP(b, q, n) << endl;
		system("pause");
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

