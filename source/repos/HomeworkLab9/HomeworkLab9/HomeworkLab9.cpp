// HomeworkLab9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

float calSumGP(float b, float q, int n)
{
	return (b * (1 - pow(q, n))) / (1 - q);
}
class euqals
{
private:
	float b, q;
	int n;
public:
	float cals(float b, float q, int n)
	{
		return (b * (1 - pow(q, n))) / (1 - q);
	}
	float excep(float q);
};
float euqals::excep(float q)
{
	if (q != 1)
		cout << "exception q!=1" << endl;
	return q!=1;
}
class myexception
{
private:
	euqals* euqal;
public:
	myexception(euqals* q) :euqal(q){}
	euqals* Getexcep() {
		return euqal;
	}
};


int main()
{
	int n;
	float b, q;
		cout << "Enter the value of b = ";
		cin >> b;	
		cout << "Enter the value of q = ";
		try {
			cin >> q;
			if (q != 1)
				throw q;
			cout << "An exception occurred. q cant be 1:  " << endl;
		}
		catch(myexception q)
		{
			printf("An exception q=1 %d  %p \n", q.Getexcep());
		}
		/*try {
			cout << "Enter the value of q = ";
			cin >> q;
		}
		catch (myexception q)
		{
			printf("An exception q=1 %d  %p \n", q.Getexcep());
		}*/
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


