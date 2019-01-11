#include<iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

map<char, int> mp;

int main()
{
	string input;
	cin >> input;
	for (auto i : input)mp[i]++;

	int count = 0;
	int check = 0;
	for (auto i : mp)
	{
		if (i.second % 2 == 1 && check)
		{
			cout << "I'm Sorry Hansoo";
			return 0;
		}
		else if(i.second % 2)
		{
			check = 1;
		}
	}

	char ch;
	int output_check = 0;
	string out;
	for (auto i : mp)
	{
		if (i.second % 2 == 1)
		{
			ch = i.first;
			output_check = 1;
		}
		for (int j = 0; j < i.second / 2; j++)
		{
			out.push_back(i.first);
		}
	}
	cout << out;
	if (output_check)cout << ch;
	reverse(out.begin(), out.end());
	cout << out;
	return 0;
}