#include <iostream>
#include <vector>
using namespace std;

int check(const string& str, const string& substr)
{
	int br = 0;
	string::size_type pos = 0;
	while ((pos = str.find(substr, pos)) != std::string::npos)
	{
		br++;
		pos += substr.length()-1;
	}
	return br;
}

int main()
{
	string str="ananasana";
	string substr = "ana";
	int n = check(str, substr);
	cout << n << endl;
	return 0;
}