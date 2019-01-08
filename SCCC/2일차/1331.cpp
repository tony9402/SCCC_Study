#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<bool>> map;

int print(int n)
{
	if (!n)cout << "Invalid";
	else cout << "Valid";
	return 0;
}

int main()
{
	map.resize(7);
	for (int i = 0; i < 7; i++)map[i].resize(7);

	int count = 1;
	int y, x;
	int sy, sx;
	for (int i = 0; i < 36; i++)
	{
		string input;
		cin >> input;
		int ny = input[1] - '1' + 1;
		int nx = input[0] - 'A' + 1;
		if (map[ny][nx] != 0)
		{
			print(false);
			return 0;
		}
		map[ny][nx] = true;
		if (i)
		{
			int cx = abs(nx - x);
			int cy = abs(ny - y);
			if (!((cx == 2 && cy == 1) || (cx == 1 && cy == 2)))
			{
				print(false);
				return 0;
			}
		}
		else sx = nx, sy= ny;
		y = ny, x = nx;
	}

	int cx = abs(sx - x);
	int cy = abs(sy - y);
	if (!((cx == 2 && cy == 1) || (cx == 1 && cy == 2)))
	{
		print(false);
		return 0;
	}

	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			if (!map[i][j])
			{
				print(false);
				return 0;
			}
		}
	}

	print(true);


	return 0;
}