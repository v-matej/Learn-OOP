#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

bool more_500(int n) { return n > 500; }

bool less_300(int n) { return n < 300; }

struct down {
	bool operator()(const int a, const int b) {
		return a > b;
	}
};

class X{};

vector<int> ucitaj()
{
	vector<int> v;
	ifstream fin("numbers.txt");
	try {
		if (!fin) throw X();
	}
	catch (X) {
		cout << "Datoteka nije ispravno otvorena" << endl;
		return v;
	}
	istream_iterator<int> it(fin);
	istream_iterator<int> eos;
	ostream_iterator<int> out(cout, " ");
	copy(it, eos, back_inserter(v));
	copy(v.begin(), v.end(), out);
	cout << endl;
	cout << "Elemenata vise od 500 je:" << count_if(v.begin(), v.end(), more_500) << endl;
	cout << "Najmanji element je:" << *min_element(v.begin(), v.end()) << endl;
	cout << "Najveci element je:" << *max_element(v.begin(), v.end()) << endl;
	v.erase(remove_if(v.begin(), v.end(),less_300),v.end());
	sort(v.begin(), v.end(), down());
	copy(v.begin(), v.end(), out);
	cout << endl;
	return v;
}

bool nepar(int n) { return (n % 2) != 0; }

bool par(int n) { return (n % 2) == 0; }

bool potencija_2(int n) {
	int i=n;
	while (i % 2 == 0)
		i /= 2;
	return (i == 1) ? 1 : 0;
}

struct up_nepar {
	bool operator()(const int a, const int b)
	{
		if (nepar(a) && nepar(b))
			return (a > b) ? 0 : 1;
		return 0;
	}
};

struct up_par {
	bool operator()(const int a, const int b)
	{
		if (par(a) && par(b))
			return (a > b) ? 0 : 1;
		return 0;
	}
};

void find(vector<int> v)
{
	ostream_iterator<int> out(cout, " ");
	cout << "Prvi neparni broj je:" << *find_if(v.begin(), v.end(), nepar)<<endl;
	cout << "Ukupan broj neparnih brojeva je:" << count_if(v.begin(), v.end(), nepar)<<endl;
	replace_if(v.begin(), v.end(),potencija_2 , 2);
	copy(v.begin(), v.end(), out);
	cout << endl;
	sort(v.begin(), v.end(), up_par());
	sort(v.begin(), v.end(), up_nepar());
	copy(v.begin(), v.end(), out);
	cout << endl;
}

int main()
{
	vector<int> v;
	v=ucitaj();
	find(v);
}