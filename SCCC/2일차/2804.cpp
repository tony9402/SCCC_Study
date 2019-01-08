#include<iostream>
#include<string>

using namespace std;

string a, b;

int main()
{
	cin >> a >> b;

	for (int i = 0; i < a.size(); i++)
	{
		for (int j = 0; j < b.size(); j++)
		{
			if (a[i] == b[j])
			{
				for (int m = 0; m < b.size(); m++)
				{
					for (int n = 0; n < a.size(); n++)
					{
						if (m == j)
						{
							cout << a[n];
						}
						else if (n == i)
						{
							cout << b[m];
						}
						else
						{
							cout << '.';
						}
					}
					cout << '\n';
				}
				return 0;
			}
		}
	}
}