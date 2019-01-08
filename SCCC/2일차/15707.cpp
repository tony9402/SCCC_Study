#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string a, b;
	string Long;
	long long num = (1ULL << 63) - 1;
	while (num)
	{
		Long = (char)('0' + (num % 10)) + Long;
		num /= 10;
	}
	long long r; 
	cin >> a >> b >> r;
	if (!a.compare("0") || !b.compare("0")) { cout << 0; return 0; }
	if (a.size() > 19 || b.size() > 19) { cout << "overflow"; return 0; }
	if((a.size() == 19 && a.compare(Long) < 0) || (b.size() == 19 && b.compare(Long) < 0)) { cout << "overflow"; return 0; }
	long long aa = 0, bb = 0;
	for (auto i : a)aa = aa * 10 + i - '0';
	for (auto i : b)bb = bb * 10 + i - '0';
	cout << aa << ' ' << bb;

	if (aa > r / bb) { cout << "overflow"; return 0; }
	else { cout << aa * bb; }
	return 0;
}