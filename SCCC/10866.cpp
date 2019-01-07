//#include<iostream>
//#include<deque>
//#include<string>
//
//using namespace std;
//
//deque<int> dq;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//	for (; n--;)
//	{
//		string input;
//		cin >> input;
//		if (!input.compare("push_back"))
//		{
//			int num;
//			cin >> num;
//			dq.push_back(num);
//		}
//		else if (!input.compare("push_front"))
//		{
//			int num;
//			cin >> num;
//			dq.push_front(num);
//		}
//		else if (!input.compare("front"))
//		{
//			if (dq.size())cout << dq.front() << '\n';
//			else cout << -1 << '\n';
//		}
//		else if (!input.compare("back"))
//		{
//			if (dq.size())cout << dq.back() << '\n';
//			else cout << -1 << '\n';
//		}
//		else if (!input.compare("pop_front"))
//		{
//			if (dq.empty())cout << -1 << '\n';
//			else
//			{
//				cout << dq.front() << '\n';
//				dq.pop_front();
//			}
//		}
//		else if (!input.compare("pop_back"))
//		{
//			if (dq.empty())cout << -1 << '\n';
//			else
//			{
//				cout << dq.back() << '\n';
//				dq.pop_back();
//			}
//		}
//		else if (!input.compare("size"))
//		{
//			cout << dq.size() << '\n';
//		}
//		else
//		{
//			cout << dq.empty() << '\n';
//		}
//	}
//}