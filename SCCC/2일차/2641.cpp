#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int> ans, ans2, ans3, ans4;
vector<int> in;
vector<vector<int>> output;
int S[] = { 0,3,4,1,2 };

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
		ans.push_back(input);
		ans2.push_back(S[input]);
	}

	ans3 = ans;
	ans4 = ans2;
	reverse(ans3.begin(), ans3.end());
	reverse(ans4.begin(), ans4.end());

	int T;
	cin >> T;
	for (; T--;)
	{
		in.clear();
		for (int i = 0; i < n; i++)
		{
			cin >> input;
			in.push_back(input);
		}

		for (int i = 0; i < n; i++)
		{
			int j, index;
			for (j = i, index = 0; index < n; index++)
			{
				int now = (j + index) % n;
				if (in[now] != ans[index])break;
			}
			if (index >= n)
			{
				output.push_back(in);
				break;
			}
			for (j = i, index = 0; index < n; index++)
			{
				int now = (j + index) % n;
				if (in[now] != ans2[index])break;
			}
			if (index >= n)
			{
				output.push_back(in);
				break;
			}
			for (j = i, index = 0; index < n; index++)
			{
				int now = (j + index) % n;
				if (in[now] != ans3[index])break;
			}
			if (index >= n)
			{
				output.push_back(in);
				break;
			}
			for (j = i, index = 0; index < n; index++)
			{
				int now = (j + index) % n;
				if (in[now] != ans4[index])break;
			}
			if (index >= n)
			{
				output.push_back(in);
				break;
			}
		}
	}
	cout << output.size() << '\n';
	for (int i = 0; i < output.size(); i++)
	{
		for (auto j : output[i])
		{
			cout << j << ' ';
		}
		cout << '\n';
	}
	return 0;
}