#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
using namespace std;

/*
1. Napisati funkciju koja vraća referencu na neki prvi element niza koji je veći
od nule.Koristeći povratnu vrijednost funkcije kao lvalue u main funkciji
promijenite vrijednost tog elementa na nula.
*/

void ispisi_niz(int* niz, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << niz[i]<<"\t";
	}
	cout << endl;
}

int& set_ele(int* niz,int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (niz[i] != 0)
		{
			return niz[i];
		}
	}
}


int main()
{
	int niz[6] = { 0,0,2,3,4,5 };
	int n = 6;
	ispisi_niz(niz, n);
	set_ele(niz,n) = 0;
	ispisi_niz(niz, n);
}

