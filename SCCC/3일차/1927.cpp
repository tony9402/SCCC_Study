#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

int list[500000];
int s = 1;

int delete_node()
{
	if (s == 1)return 0;
	int output = list[1];
	list[1] = list[--s];
	list[s] = -1;
	int index = 1;
	while (1)
	{
		if ((list[index] > list[index * 2] && list[index * 2] > 0) || (list[index] > list[index * 2 + 1] && list[index * 2 + 1] > 0))
		{
			if (list[index * 2] > list[index * 2 + 1] && (list[index * 2] > 0 && list[index * 2 + 1] > 0))
			{
				swap(list[index], list[index * 2 + 1]);
				index = index * 2 + 1;
			}
			else if (list[index * 2] < list[index * 2 + 1] && (list[index * 2] > 0 && list[index * 2 + 1] > 0))
			{
				swap(list[index], list[index * 2]);
				index = index * 2;
			}
			else if (list[index * 2] > 0 && list[index * 2] < list[index])
			{
				swap(list[index], list[index * 2]);
				index = index * 2;
			}
			else if (list[index * 2 + 1] > 0 && list[index * 2 + 1] < list[index])
			{
				swap(list[index], list[index * 2 + 1]);
				index = index * 2 + 1;
			}
			else break;
		}
		else break;
	}
	return output;
}

void insert(int data)
{
	list[s] = data;
	int index = s++;
	while (index / 2 >= 1)
	{
		if (list[index / 2] > 0 && list[index] < list[index / 2])swap(list[index], list[index / 2]);
		index /= 2;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	memset(list, -1, sizeof(list));

	int n;
	cin >> n;
	for (; n--;)
	{
		int input;
		cin >> input;
		if (input)insert(input);
		else cout << delete_node() << '\n';
	}

	return 0;
}