#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<string>> Map;

int Cal(int a, int b)
{
	int ans = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (Map[a][i][j] != Map[b][i][j])++ans;
		}
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	Map.resize(n);
	for (int j = 0; j < n; j++)
	{
		Map[j].resize(5);
		for (int i = 0; i < 5; i++)
		{
			cin >> Map[j][i];
		}
	}

	int ans = 0x7FFFFFFF;
	int first, second;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int Result = Cal(i, j);
			if (ans > Result)
			{
				ans = Result;
				first = i + 1;
				second = j + 1;
			}
		}
	}
	cout << first << ' ' << second;
	return 0;
}