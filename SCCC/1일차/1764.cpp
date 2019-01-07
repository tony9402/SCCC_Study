#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

map<string, bool> mp;
vector<string> vc;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		mp[input] = true;
	}
	for (int j = 0; j < m; j++)
	{
		string input;
		cin >> input;
		if (mp[input])vc.push_back(input);
	}
	cout << vc.size() << '\n';
	sort(vc.begin(), vc.end());
	for (auto i : vc)cout << i << '\n';
	return 0;
}