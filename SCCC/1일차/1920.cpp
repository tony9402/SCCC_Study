#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> vc;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		vc.push_back(input);
	}
	cin >> n;
	sort(vc.begin(), vc.end());
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		cout << binary_search(vc.begin(), vc.end(), input) << '\n';
	}
	return 0;
}