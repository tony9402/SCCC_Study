#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

stack<int> st;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		if (!input.compare("push"))
		{
			int num;
			cin >> num;
			st.push(num);
		}
		else if (!input.compare("top"))
		{
			if (st.empty())cout << -1 << '\n';
			else cout << st.top() << '\n';
		}
		else if (!input.compare("size"))
		{
			cout << st.size() << '\n';
		}
		else if (!input.compare("pop"))
		{
			if (st.empty()) cout << -1 << '\n';
			else
			{
				cout << st.top() << '\n';
				st.pop();
			}
		}
		else if (!input.compare("empty"))
		{
			cout << st.empty() << '\n';
		}
	}
	return 0;
}