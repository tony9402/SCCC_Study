#include<iostream>
#include<vector>
#include<queue>
#include<functional>

using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;

	while (n--)
	{
		int num;
		cin >> num;
		pq.push(num);
	}

	while (!pq.empty()) {
		cout << pq.top() << '\n';
		pq.pop();
	}
}