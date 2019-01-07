#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<pair<int, int>> vc;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	while (n--)
	{
		int y, x;
		cin >> y >> x;
		vc.push_back(make_pair(x, y));
	}

	sort(vc.begin(), vc.end());

	for (auto i : vc)cout << i.second << ' ' << i.first << '\n';
	return 0;
}