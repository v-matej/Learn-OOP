#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
using  namespace std;



void check_str(string& s)
{
	
	for (int i = 0; i < s.length(); i++)
	{
		if ((int)s[i] == 32)
		{
			int j = i + 1;
			if (ispunct(s[j]))
			{
				s.erase(s.begin() + i);
			}
		}
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (ispunct(s[i]))
		{
			int j = i + 1;
			if ((int)s[j] != 32)
			{
				s.insert(j," ");
			}
		}
	}
	
	
}

int main()
{
	string str = "Ja bih ,ako ikako mogu , ovu recenicu napisala ispravno .";
	check_str(str);
	cout << str << endl;
	return 0;
}