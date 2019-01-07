//#include<iostream>
//#include<stack>
//#include<string>
//#include<algorithm>
//
//using namespace std;
//
//stack<char> st;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//
//	string input;
//	cin >> input;
//
//	int sum = 0;
//	bool check = false;
//	for (auto i : input)
//	{
//		if (i == '(')
//		{
//			st.push(i);
//			check = false;
//		}
//		else
//		{
//			if (check)
//			{
//				st.pop();
//				sum++;
//			}
//			else
//			{
//				check = true;
//				sum += st.size() - 1;
//				st.pop();
//			}
//		}
//	}
//
//	cout << sum;
//	return 0;
//}