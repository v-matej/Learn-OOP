#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdlib>
using namespace std;

/*
3. Napisati funkciju koja vraća niz int vrijednosti veličine n u kojem je svaki
element zbroj svoja dva prethodnika. Prvi i drugi element u nizu su jedinice.
U main funkciji ispisati dobiveni niz i osloboditi memoriju.
*/

int* create_arr(int n)
{
	int* arr;
	arr = new int[n];
	arr[0] = 1;
	arr[1] = 1;
	int* p1=arr;
	int* p2 = &arr[1];
	for (int i = 2; i < n; i++)
	{
		arr[i] = *p1 + *p2;
		p1++;
		p2++;
	}
	return arr;
}

int main()
{
	int n;
	int* p;
	cout << "Unesite duljinu niza: ";
	cin >> n;
	p=create_arr(n);
	for (int i = 0; i < n; i++)
		{
			cout << p[i]<<" ";
		}
	cout << endl;
	delete p;
	return 0;
}