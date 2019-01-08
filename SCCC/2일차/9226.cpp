#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>

using namespace std;

deque<char> dq;

bool check(char a)
{
	return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	string input;
	while (1)
	{
		cin >> input;
		if (!input.compare("#"))break;
		dq.clear();
		for (auto i : input) dq.push_back(i);
		string Sum = "ay";
		int count = 0;
		while (!check(dq[0]))
		{
			dq.push_back(dq.front());
			dq.pop_front();
			count++;
			if (count >= dq.size())break;
		}
		for (auto i : dq)cout << i;
		cout << "ay\n";
	}
	return 0;
}