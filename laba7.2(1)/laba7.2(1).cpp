#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
void Create(int** a, const int n, const int k, const int Low, const int High);
void Print(int** a, const int n, const int k);
int Sum(int** a, const int n, const int k);
int main()
{
	srand((unsigned)time(NULL));
	int Low = -8;
	int High = 42;
	int n;
	int k;
	cout << "n = "; cin >> n;
	cout << "k = "; cin >> k;
	int** a = new int* [n];
	for (int i = 0; i < n; i++)
		a[i] = new int[k];
	Create(a, n, k, Low, High);
	Print(a, n, k);
	cout << "Sum = " << Sum(a, n, k) << endl;
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
	return 0;
}
void Create(int** a, const int n, const int k, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}
void Print(int** a, const int n, const int k)
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
int Sum(int** a, const int n, const int k)
{
	int min = a[0][0];
	int sum = 0;
    for (int i = 0; i < n; i += 2)
	{
		for (int j = 0; j < k; j++)
		{

			if (a[i][j] <= min)
				min = a[i][j];

		}
		sum += min;
	}
	return sum;
}
