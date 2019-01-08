#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> Map;

int dx[] = { -1,1,0,0,-1,1,1,-1 };
int dy[] = { 0,0,-1,1,-1,1,-1,1 };
int result_x, result_y;

int Cal(int y, int x, int dir, int color)
{

	int qy = y + dy[dir];
	int qx = x + dx[dir];
	if (qy < 0 || qy >= 19)return 0;
	if (qx < 0 || qx >= 19)return 0;

	if (Map[qy][qx] == color)
	{
		if (result_x > qx)
		{
			result_x = qx;
			result_y = qy;
		}
		else if (result_x == qx && result_y >= qy)
		{
			result_y = qy;
		}
		return Cal(qy, qx, dir, color) + 1;
	}
	return 0;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	Map.resize(19);
	for (int i = 0; i < 19; i++)
	{
		Map[i].resize(19);
		for (int j = 0; j < 19; j++)
		{
			cin >> Map[i][j];
		}
	}


	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			if (Map[i][j] == 0)continue;

			for (int k = 0; k < 4; k++)
			{
				int cal = 1;

				for (int m = 0; m < 2; m++)
				{
					int qy = i + dy[2 * k + m];
					int qx = j + dx[2 * k + m];
					if (qy < 0 || qy >= 19)continue;
					if (qx < 0 || qx >= 19)continue;
					result_x = j;
					result_y = i;
					if (Map[i][j] == Map[qy][qx])
					{
						cal = cal + Cal(i, j, 2 * k + m, Map[i][j]);
					}
				}
				if (cal == 5)
				{
					cout << Map[i][j] << '\n';
					cout << result_y + 1 << ' ' << result_x + 1;
					return 0;
				}
			}
		}
	}
	cout << 0;
	return 0;
}