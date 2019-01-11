#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int list[200000];
int Size = 1;

int delete_node()
{
	if (Size == 1)return 0;
	int output = list[1];
	list[1] = list[Size];
	list[Size] = 0;
	int index = 1;
	while (1)
	{
		if (list[index] < list[index * 2] || list[index] < list[index * 2 + 1])
		{
			if (list[index * 2] > list[index * 2 + 1])
			{
				swap(list[index * 2], list[index]);
				index = index * 2;
			}
			else
			{
				swap(list[index * 2 + 1], list[index]);
				index = index * 2 + 1;
			}
		}
		else break;
	}
	Size--;
	return output;
}

void insert(int node)
{
	int S = ++Size;
	list[S] = node;
	while (S / 2 >= 1)
	{
		if (list[S] > list[S / 2])
		{
			swap(list[S], list[S / 2]);
		}
		S = S / 2;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for (; n--;)
	{
		int input;
		cin >> input;
		if (!input)
		{
			cout << delete_node() << '\n';
		}
		else
		{
			insert(input);
		}
	}
	return 0;
}