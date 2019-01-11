#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> list;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int input;
	for (int i = 0; i < n; i++) { cin >> input; list.push_back(input); }
	for (int i = 0; i < n; i++)
	{
		int index = i;
		for (int j = i + 1; j < n; j++)if (list[i] > list[j])index = j;
		swap(list[i], list[index]);
	}

	for (auto i : list)cout << i << '\n';
	return 0;
}