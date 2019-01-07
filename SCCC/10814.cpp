//stable sort로도 풀어보기

#include<string>
#include<iostream>
#include<vector>
#include<tuple>
#include<algorithm>

using namespace std;

vector<tuple<int, int, string>> vc;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int n;
		string name;
		cin >> n >> name;
		vc.push_back(make_tuple(n, i, name));
	}

	sort(vc.begin(), vc.end());

	for (auto i : vc)
	{
		cout << get<0>(i) << ' ' << get<2>(i) << '\n';
	}

	return 0;
}