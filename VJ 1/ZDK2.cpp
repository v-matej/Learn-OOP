
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
using namespace std;

/*
2. Napisati funkciju koja prima niz brojeva i broj elemenata niza te iz niza
izbacuje duplikate, pri čemu se broj elemenata treba promijeniti. U main
funkciji korisnik unosi inicijalni broj elemenata niza. Napisati funkcije za
unos niza i ispisivanje niza.
*/

void unesi_niz(int* niz, int n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> niz[i];
	}
}

void ispisi_niz(int* niz, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << niz[i];
	}
	cout << endl;
}
void sort_arr(int* niz, int n)
{
	int temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (niz[i] >= niz[j])
			{
				temp = niz[i];
				niz[i] = niz[j];
				niz[j] = temp;
			}
		}
	}
}
int filter(int arr[], int n)
{
	if (n == 0 || n == 1)
		return n;

	int temp[100];

	int j = 0;

	for (int i = 0; i < n - 1; i++)
	{
		if (arr[i] != arr[i + 1])
		{
			temp[j++] = arr[i];
		}
	}

	temp[j++] = arr[n - 1];

	for (int i = 0; i < j; i++)
	{
		arr[i] = temp[i];
	}

	return j;
}

int main()
{
	int n;
	cout << "Unesite duljinu niza:";
	cin >> n;
	int* niz;
	niz = new int[n];
	unesi_niz(niz, n);
	ispisi_niz(niz, n);
	sort_arr(niz, n);
	n=filter(niz, n);
	ispisi_niz(niz, n);



	delete[] niz;
	return 0;
}
