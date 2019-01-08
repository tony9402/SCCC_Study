#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

vector<vector<char>> vc;

int dx[] = { 1,-1};

int main()
{
	int n;
	cin >> n;
	string input;
	cin >> input;

	int r = input.size() / n;
	vc.resize(r);

	for (int i = 0; i < r; i++)vc[i].resize(n);
	
	int size = 0;
	
	int x = 0, y =0 ;
	int cnt = 0;
	while (size < input.size())
	{
		vc[y][x] = input[size++];
		x += dx[cnt];
		if (x>= n)
		{
			cnt = 1 - cnt;
			y++;
			x--;
		}
		else if(x< 0)
		{
			cnt = 1 - cnt;
			y++;
			x++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < r; j++)
		{
			cout << vc[j][i];
		}
	}

	return 0;
}