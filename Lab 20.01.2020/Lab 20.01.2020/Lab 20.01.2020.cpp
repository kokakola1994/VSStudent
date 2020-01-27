// Lab 20.01.2020.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
void initRand(int** mat, int n, int m)
{
    int range_max = -5, range_min = 5;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mat[i][j] = (double)rand() / (RAND_MAX + 1) * (range_max - range_min) + range_min;
}
void Print(int** mat, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d\t", mat[i][j]);
        printf("\n");
    }
}
void PrintArray(int* a, int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
void MaxSt2(int** a, int M, int N, int* l, int** mas)
{
    int* wyn = (int*)malloc(N * sizeof(int));
    int max1, k = 0;
    bool flag = false;
    for (int j = 0; j < N; j++)
    {
        flag = false;
        max1 = a[0][j];
        for (int i = 0; i < M; i++)
            if (a[i][j] == 0) flag = true;
        if (max1 < a[i][j])
            max1 = a[i][j];
    }
    if (flag)
    {
        wyn[k] = max1; k++;
    }
    wyn = (int*)realloc(wyn, k * sizeof(int));
}

int main()
{
    int N, M, * mas, k = 0;
    printf("Input M& N\n");
    scanf("%d%d", &M, &N)
        int** a = (int**)malloc(M * sizeof(int*));
    for (int i = 0; i < M; i++)
    {
        a[i] = (int*)malloc(N * sizeof(int));
    }
    InitRand(a, M, N);
    Print(a, M, N);
    int* res = MaxSt1(a, M, N, &k);
    printf("Max in column variant 1\n");
    PrintArray(res, k);
    MaxSt2(a, M, N, &k, &mas);
    printf("Max in column variant 2\n");
    PrintArray(mas, k);
    free(mas);
    free(res);
    for (int i = 0; i < M; i++)
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
