#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <random>

using namespace std;

bool is_vowel(char c)
{
	c = tolower(c);
	return c == 'a'
		or c == 'e'
		or c == 'i'
		or c == 'o'
		or c == 'u'
		;
}

void piglatin(string& str)
{
	stringstream ss(str);
	string pig_latin;
	string word;
	int i=0;
	char punct;
	while (ss >> word)
	{
		if (ispunct(word.back()))
		{
			punct = word.back();
			word.pop_back();
		}
		if (is_vowel(word[0])) {
			word += "hay";
			pig_latin += word + ' ';
		}
		else{
			while(!is_vowel(word[i]))
			{
				word.push_back(word[i]);
				word.erase(word.begin());
			}
			word += "ay";
			pig_latin += word + ' ';
		}
	}
	pig_latin.pop_back();
	pig_latin += punct;
	cout << pig_latin;
}

int main()
{
	srand(time(NULL));
	vector <string> vector_str{ "What time is it?","How are you ?","What is that on the wall?","I am ok thanks."};
	int randNum = 0;
	randNum= rand() % 4;
	piglatin(vector_str[randNum]);
	return 0;
}