#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> list;

int dy[] = { -1,-1,-1,0,0,1,1,1 };
int dx[] = { -1,0,1,-1,1,-1,0,1 };

bool IsNumber(char num)
{
	return '0' <= num && num <= '9';
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		list.push_back(input);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int sum = 0;
			if (IsNumber(list[i][j]))
			{
				cout << '*';
			}
			else
			{
				for (int k = 0; k < 8; k++)
				{
					int qy = i + dy[k];
					int qx = j + dx[k];

					if (0 > qy || qy >= n || 0 > qx || qx >= n)continue;

					if (IsNumber(list[qy][qx]))
					{
						sum += list[qy][qx] - '0';
					}
				}
				if (sum >= 10)cout << 'M';
				else cout << sum;
			}
		}
		cout << '\n';
	}
	return 0;
}