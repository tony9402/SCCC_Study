#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int h, m;
	cin >> h >> m;
	
	int i, j;
	i = j = 0;
	while (i <= 360)
	{
		if (h == i && m == j)
		{
			cout << 'O';
			return 0;
		}
		i++;
		j = (j + 12) % 360;
	}
	cout << 'X';
}