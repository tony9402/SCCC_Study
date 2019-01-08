#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> list;

bool check(int n)
{
	int index[10] = { 0 };
	while (n)
	{
		index[n % 10]++;
		n /= 10;
	}
	for (int i = 0; i < 10; i++)
	{
		if (index[i] >= 2)return false;
	}
	return true;
}

int main()
{
	list.resize(5001);

	for (int i = 1; i <= 5000; i++)
	{
		list[i] = list[i - 1] + (check(i) == true);
	}

	int x, y;
	for (; ~scanf("%d %d", &x, &y);)
	{
		cout << list[y] - list[x - 1] << '\n';
	}
	return 0;
}