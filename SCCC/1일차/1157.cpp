#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

string input;
vector<int> a;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> input;
	a.resize(26);
	for (int i = 0; i < input.size(); i++)
	{
		int index = (65 <= input[i] && input[i] <= 90) ? input[i] - 'A' : input[i] - 'a';
		a[index]++;
	}
	int maxi = 0, index;
	bool check = false;
	for (int i=0;i<a.size();i++)
	{
		if (a[i] > maxi)maxi = a[i], check = false, index = i;
		else if (a[i] == maxi)check = true;
	}
	if (check)
	{
		cout << '?';
		return 0;
	}
	cout << (char)('A' + index);

	return 0;
}  