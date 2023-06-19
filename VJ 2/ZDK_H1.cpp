#include "H1.h"

void vector_i1(vector<int>& v, int n)
{
	int i;
	int x;
	cout << "Uneiste prvi vektor duzine " << n << endl;
	for (i = 0; i < n; i++)
	{
		cin >> x;
		v.push_back(x);
	}
	cout<<"\n";
}
void vector_i2(vector<int>& v, int int_s, int int_e)
{
	int x;
	cout << "Uneiste drugi vektor kojem us granice " <<int_s<<" "<<int_e << endl;
	cin >> x;
	while (x >= int_s && x <= int_e)
	{
		v.push_back(x);
		cin >> x;
	}
	cout << "\n";
}


void vector_o(vector<int> v)
{
	for (auto i : v)
		cout << i << endl;
}