//#include<iostream>
//#include<vector>
//#include<queue>
//#include<functional>
//
//using namespace std;
//
//priority_queue<int, vector<int>, less<int>> pq;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		cin >> num;
//		if (!num)
//		{
//			if (pq.empty()) cout << 0 << '\n';
//			else {
//				cout << pq.top() << '\n';
//				pq.pop();
//			}
//		}
//		else
//		{
//			pq.push(num);
//		}
//	}
//	return 0;
//}