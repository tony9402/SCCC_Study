//#include<iostream>
//#include<algorithm>
//#include<map>
//#include<string>
//
//using namespace std;
//
//map<char, int> mp;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	string input;
//	cin >> input;
//	
//	int maxi = 0;
//	char ans;
//	bool check = false;
//	
//	for (auto i : input)mp[(65<=i&&i<=90)?i:i-32]++;
//	for (auto i : mp)
//	{
//		if (maxi < i.second)
//		{
//			maxi = i.second;
//			ans = i.first;
//			check = false;
//		}
//		else if (maxi == i.second)
//		{
//			check = true;
//		}
//	}
//	if (check)cout << '?';
//	else cout << ans;
//	return 0;
//}