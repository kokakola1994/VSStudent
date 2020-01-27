// HomeWork.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int M = 5;
const int N = 5;
int myArray[M + 1][N] = { 0 };

void generateArray();
void sumColumns();
void printSumColumns();

void sumColumns()
{
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < M; ++j)
        {
            myArray[M][j] += myArray[i][j];        
        }
    }

    printSumColumns();
}
void generateArray()
{

    // set the seed=time for a better rand generation
    srand(time(NULL));

    // generate the matrix using pseudo-random numbers

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            myArray[i][j] = rand() % 101 - 50;

            // output the matrix
            cout << left << setw(4) << myArray[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;
}
//sania ty w poriadkie? 
void printSumColumns()
{
    cout << endl;
    //print the whole matrix with +1 row of sums.
    //ty w poriadkie sania?
    for (int i = 0; i < M + 1; i++) {
        for (int j = 0; j < N; j++) {
            cout << left << setw(4) << myArray[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{ 
    string str;
    getline(cin, str);
    str.erase(remove_if(str.begin(), str.end(), isupper), str.end());
    cout << str << endl;

    replace_if(str.begin(), str.end(), [](char c) {
        return isdigit(c);
        }, ' ');
    cout << str << endl;

    /*int arr[4][4];
    int i, j;
    //suka bluad
    srand(time(NULL));

    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 4; ++j)
        {
            arr[i][j] = rand() % rand() % 101 - 50;
        }
    }
    //jobana w rot
    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 4; ++j)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }*/

    generateArray();
    sumColumns();
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
