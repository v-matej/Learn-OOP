#include <iostream>
#include <vector>
#include "H1.h"
using namespace std;



int main()
{
	vector<int> v1;
	vector<int> v2;
	int n;
	int int_s, int_e;
	cout << "Unesite broj elemenata za prvi vector:";
	cin >> n;
	cout << "Unesite intrval granica za drugi vektor:";
	cin >> int_s >> int_e;
	vector_i1(v1,n);
	vector_i2(v2, int_s, int_e);
	vector_o(v1);
	vector_o(v2);

	return 0;

}