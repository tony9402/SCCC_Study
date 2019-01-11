#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> input;
vector<int> ans;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) { int in; cin >> in; input.push_back(in); }
	
	for (int i = n - 1; i >= 0; i--)
	{
		ans.insert(ans.begin() + input[i], i + 1);
	}

	for (auto i : ans)cout << i << ' ';
	return 0;
}