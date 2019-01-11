#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

typedef long long ll;

map<ll, ll> mp;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n, input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		mp[input]++;
	}

	ll maxi = 0, ans = 0;
	for (auto i : mp)
	{
		if (i.second > maxi)
		{
			maxi = i.second;
			ans = i.first;
		}
		else if (i.second == maxi && i.first < ans)
		{
			ans = i.first;
		}
	}
	cout << ans;
	return 0;
}