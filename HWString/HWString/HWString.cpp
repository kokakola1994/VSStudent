// HWString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char C;
    char znaki[] = { '1','b','h','12' };
    cout << "Wprowadz literu lub liczbe: " << endl;
    cin >> C;
    if (C >= 65 && C <= 90)
    {
        cout << "\n capital ";
    }

    else if (C >= 97 && C <= 122)
    {
        cout << "\n small ";
    }

    else if (C >= 47 && C <= 57)
    {
        cout << "\n digit " << endl;
    }
    cout << endl;
    for (int k = 0; k < sizeof(znaki); k++)
    {
        cout << znaki[k];
    }
    cout << endl;
    for (int i = 0; i < sizeof(znaki); i++)
    {
        for (int j = 0; j < sizeof(znaki); j++)
        {
            cout << znaki['!'];
        }
        cout << znaki[i];
    }
    cout << endl;
    char znak = 'C';
    char S [] = { '!','#','12','T','C' };
    for (int i = 0; i < sizeof(S); i++)
    {
        if (S[i] || znak)
        {
            cout << znak;
        }
        else
        { 
            cout << S[i];
        }
           
        
    }
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
