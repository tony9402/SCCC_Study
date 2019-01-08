#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int y, x;
	int ans = m;
	for (int i = 0; i < n; i++)
	{
		cin >> y >> x;
		int cal = y - x;
		if (m + cal < 0)
		{
			cout << 0 << '\n';
			return 0;
		}
		m += cal;
		ans = max(ans, m);
	}
	cout << ans;
	return 0;
}