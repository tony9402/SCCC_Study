#include<iostream>
#include<map>
#include<vector>
#include<tuple>
#include<functional>
#include<algorithm>

using namespace std;

vector<tuple<int, int, int>> vc;
vector<int> in;
map<int, pair<int, int>> mp;

bool compare(tuple<int, int, int> &a, tuple<int, int, int> &b)
{
	int c = get<0>(a);
	int d = get<0>(b);
	if (c > d)return true;
	else if (c == d)
	{
		c = get<1>(a);
		d = get<1>(b);
		if (c < d)return true;
	}
	return false;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n, c;
	cin >> n >> c;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		in.push_back(input);
		if (mp.find(input) == mp.end())
		{
			mp[input] = { i,1 };
		}
		else
		{
			mp[input].second++;
		}
	}

	for (auto i : mp)
	{
		vc.push_back(make_tuple(i.second.second, i.second.first, i.first));
	}
	sort(vc.begin(), vc.end(), compare);

	for (auto i : vc)
	{
		for (int j = 0; j < get<0>(i); j++)
		{
			cout << get<2>(i) << ' ';
		}
	}
}