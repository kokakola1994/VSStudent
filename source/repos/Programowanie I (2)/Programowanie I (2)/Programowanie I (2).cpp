// Programowanie I (2).cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;


void Print(int A[], int N)
{
	for (int i = 0; i < N; ++i)
		cout << A[i] << " ";
	cout << endl;
}
void Init(int* A, int N)
{
	for (int i = 0; i < N; ++i)
	{
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
}
void Change(int* A, int* B, int N)
{
	int C;
	for (int i = 0; i < N; ++i)
	{
		C = A[i];
		A[i] = B[i];
		B[i] = C;
	}

}

int main()
{
	/*int N, K;

	double sum = 0, a = 1;

	cout << "N = ";

	cin >> N;

	cout << "K = ";

	cin >> K;

	int i;

	for (i = 1; i <= N; ++i);

	{
		a =i;

		for (int j = 1; j < K; ++j)

			a*= i;

		sum += a;

	}

	cout << sum << endl;*/

	/*int N, K;

	int sum = 0, a;

	cout << "N = ";

	cin >> N;

	cout << "K = ";

	cin >> K;

	int i;

	for (i = 1; i <= K; ++i);

	{
		sum = 0;

		cout << "Zestaw" << i << endl;

		for (int j = 1; j <= N; ++j)
		{
			cin >> a; sum+= a;
		}

		cout << "Suma zestawu " << sum << endl;
	}*/
	int N;
	cin >> N;
	cout << "Tablica A: " << endl;
	int* A = new int[N];
	Init(A, N );
	cout << "Tablica B:" << endl;
	int* B = new int[N];
	Init(B, N );
	Change(A, B, N);
	cout << "Tablica A:" << endl;
	Print(A, N);
	cout << "Tablica B:" << endl;
	Print(B, N);
	delete[]A;
	delete[]B;
	system("pause");

	return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
