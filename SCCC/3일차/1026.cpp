#include<iostream>
#include<vector>
#include<algorithm>

#define all(x) x.begin(), x.end()

using namespace std;

vector<int> list1, list2;

bool compare(const int &a, const int &b)
{
	return a > b;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int input;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		list1.push_back(input);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		list2.push_back(input);
	}
	sort(all(list1), compare);
	sort(all(list2));
	int sum = 0;
	for (int i = 0; i < n; i++)sum += list1[i] * list2[i];
	cout << sum;
	return 0;
}