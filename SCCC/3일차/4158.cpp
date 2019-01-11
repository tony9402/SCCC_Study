#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> list;

int main()
{
	int n, k, input;
	ios::sync_with_stdio(false);
	cin.tie(0);
	while (1) {
		int ans = 0;
		cin >> n >> k;
		if (!n && !k)break;
		list.clear();
		for (int i = 0; i < n; i++)cin >> input, list.push_back(input);
		for (int j = 0; j < k; j++)
		{
			cin >> input;
			if (binary_search(list.begin(), list.end(), input))ans++;
		}
		cout << ans << '\n';
	}
	return 0;
}