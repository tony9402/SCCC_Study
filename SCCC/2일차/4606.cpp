#include<iostream>
#include<string>
#include<map>

using namespace std;

map<char, string> mp = {
	{ ' ',"%20" },
	{ '!',"%21" },
	{'$' ,"%24"},
	{'%',"%25"},
	{'(',"%28"},
	{')',"%29"},
	{'*',"%2a"} };

int main()
{
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (mp.find(ch) == mp.end())
		{
			cout << ch;
		}
		else
		{
			cout << mp[ch];
		}
	}
	return 0;
}