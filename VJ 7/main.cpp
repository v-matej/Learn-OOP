#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include "MathEx.h"
using namespace std;

int unesi_broj()
{
	int a;
	cout << "Unesite broj:" << endl;
	cin >> a;
	if (cin.fail()) throw Not_a_Number();
	return a;
}

bool valid_o(char ch)
{
	if (ch == '+') return true;
	else if (ch == '-') return true;
	else if (ch == '*') return true;
	else if (ch == '/') return true;
	else return false;
}

char unesi_znak()
{
	char ch;
	cout << "Unesite znak:" << endl;
	cin >> ch;
	if (!valid_o(ch)) throw Invalid_O();
	else
		return ch;
}

int rijesi(int a, int b, char ch)
{
	if (ch == '+') return a + b;
	if (ch == '-') return a - b;
	if (ch == '*') return a * b;
	if (ch == '/')
	{
		if (b == 0) throw Zero_Division();
		else return a / b;
	}
}

string getTime()
{
	time_t now = time(0);
	char* dt = ctime(&now);
	string temp = dt;
	temp = temp.substr(0, temp.size() - 1);
	return temp;
}

int main()
{
	vector <string> error;
	int a,b,c;
	char ch;
	int n = 5;
	while (true)
	{
		try{
		a = unesi_broj();
		b = unesi_broj();
		ch = unesi_znak();
		c = rijesi(a, b, ch);
		cout << a << ch << b << "=" << c << endl;;
		}
		catch (MathEx& err)
		{
			string errMsg = getTime() + " " + err.Show_Error();
		//	cout << errMsg;
			error.push_back(errMsg);
		}
		n--;
		if (n == 0)
			break;
	}
	for (auto i : error)
	{
		cout << i<<endl;
	}
}