#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<string> map;
int dx[] = { -1,1,0,0 };
int dy[] = { 0,0,-1,1 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	
	map.resize(n);
	for (int i = 0; i < n; i++)cin >> map[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == '.')
			{
				int count = 0;
				int check = 0;
				for (int k = 0; k < 4; k++)
				{
					int qy = dy[k] + i;
					int qx = dx[k] + j;

					if (0 > qy || qy >= n || 0 > qx || qx >= m)continue;
					++count;

					if (map[qy][qx] == 'X')
					{
						check++;
					}
				}
				if ((count == 3 && check >= 2) || (count == 2 && check) || check > 2)
				{
					cout << 1;
					return 0;
				}
			}
		}
	}
	cout << 0;
	return 0;
}