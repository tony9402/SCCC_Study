#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool check(char a)
{
	return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
}

bool solve(string &a)
{
	bool Return = false;
	bool Check = false;
	int count = 0;
	char save = 0;
	for (auto i : a)
	{
		if (check(i))
		{
			Check = true;
			if (!Return)
			{
				count = 1;
				Return = true;
			}
			else
			{
				if (save == i && i != 'e' && i != 'o')return false;
				++count;
				if (count >= 3)return false;
			}
		}
		else
		{
			if (Return)
			{
				count = 1;
				Return = false;
			}
			else
			{
				if (save == i && i != 'e' && i != 'o')return false;
				++count;
				if (count >= 3)return false;
			}
		}
		save = i;
	}
	if (!Check)return false;
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	string input;
	while (1)
	{
		cin >> input;
		if (input.compare("end") == 0)return 0;
		cout << '<' << input << '>';
		if (solve(input))
		{
			cout << " is acceptable.\n";
		}
		else
		{
			cout << " is not acceptable.\n";
		}
	}
	return 0;
}