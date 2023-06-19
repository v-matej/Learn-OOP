#include <iostream>
#include <string>

using namespace std;

template<typename T>
T _min(T a, T b)
{
	if (a > b) return b;
	else return a;
}

int main()
{
	int a(5), b(10);
	double c(1.75), d(0.04);
	string s1("oko"), s2("tko");
	cout << "Najmanji broj(int): " << _min(a, b) << endl;
	cout << "Najmanji broj(double): " << _min(c, d) << endl;
	cout << "Najmanji string: " << _min(s1, s2) << endl;

}