#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int s=0;
	vector<int> v={1,9,2,8,3,7,4,6,5,0};
	sort(v.begin(), v.end());
	for (auto i : v)
	{
		s = s + i;
	}
	v.insert(v.begin(), 0);
	v.push_back(s);
	for (auto i : v)
	{
		cout << i << endl;
	}
	return 0;
}