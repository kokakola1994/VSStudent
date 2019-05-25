// HomeworkLab9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void calSumGP(float b, float q, int n)
{
	float sum = 0, temp = b;
	for (int i = 1; i < n; i++)
	{
		sum = sum + temp;
		temp = temp * q;
	}
	cout << "Sum of geometric progression : "
		<< sum << endl;
}

int main()
{
	int n;
	float b, q;
			try {
				cout << "Enter the value of b = ";
				cin >> b;
				if (b != 1) 
					throw b;
					cout << "An exception occurred. b cant be 1:  " << endl;
					return 0;
			}
			catch (float b)
			{
			}
	
		cout << "Enter the value of q = ";
		cin >> q;
		cout << "Enter the value of n = ";
		cin >> n;

		calSumGP(b, q, n);
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

