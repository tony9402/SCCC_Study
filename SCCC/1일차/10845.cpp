#include<iostream>
#include<queue>
#include<string>

using namespace std;

queue<int> q;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;
	for (; n--;)
	{
		string input;
		cin >> input;a
		if (!input.compare("push"))
		{
			int num;
			cin >> num;
			q.push(num);
		}
		else if (!input.compare("front"))
		{
			if (q.size())cout << q.front() << '\n';
			else cout << -1 << '\n';
		}
		else if (!input.compare("back"))
		{
			if (q.size())cout << q.back() << '\n';
			else cout << -1 << '\n';
		}
		else if (!input.compare("pop"))
		{
			if (q.empty())cout << -1 << '\n';
			else
			{
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (!input.compare("size"))
		{
			cout << q.size() << '\n';
		}
		else
		{
			cout << q.empty() << '\n';
		}
	}
	

}