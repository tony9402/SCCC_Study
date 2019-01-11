#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<int> num;

int main()
{
	int in;
	for (int i = 0; i < 3; i++)cin >> in, num.push_back(in);
	string input;
	cin >> input;
	char c = 'A';
	sort(num.begin(), num.end());
	for (int i = 0; i < 3; i++)
	{
		cout << num[input[i] - c] << ' ';
	}
	return 0; 
}