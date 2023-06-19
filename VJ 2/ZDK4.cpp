#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool myCmp(string s1, string s2)
{
	if (s1.size() == s2.size()) {
		return s1 < s2;
	}

	else {
		return s1.size() < s2.size();
	}
}
void fill_v(vector<string>& str_v)
{
	string str;
	cout << "Unesite  stringove: (za prekid unesite Ctrl+Z)" << endl;
	while (cin >> str)
	{
		reverse(str.begin(),str.end());
		str_v.push_back(str);
	}
	sort(str_v.begin(), str_v.end(), myCmp);
	for (auto i : str_v)
		cout << i << endl;
}

int main()
{
	vector<string> str_v;
	fill_v(str_v);
	return 0;
}