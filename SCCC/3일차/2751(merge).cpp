#include<iostream>
#include<vector>

using namespace std;

vector<int> arr;
vector<int> save;

void merge(int begin, int mid, int end)
{
	int left, right;
	left = begin;
	right = mid;
	int pointer = left;
	while (left < mid && right < end)
	{
		if (arr[left] < arr[right])
		{
			save[pointer++] = arr[left++];
		}
		else
		{
			save[pointer++] = arr[right++];
		}
	}
	if (left != mid)
	{
		for (int i = left; i < mid; i++)
		{
			save[pointer++] = arr[i];
		}
	}
	else
	{
		for (int i = right; i < end; i++)
		{
			save[pointer++] = arr[i];
		}
	}

	for (int i = begin; i < end; i++)
	{
		arr[i] = save[i];
	}
	return;
}

void mergesort(int begin, int end)
{
	if (end <= begin || abs(end - begin) <= 1)return;
	const int mid = (end + begin) / 2;

	mergesort(begin, mid);
	mergesort(mid, end);
	merge(begin, mid, end);
	return;
}


int main()
{
	int n;
	cin >> n;
	arr.resize(n);
	save.resize(n);
	for (int &i : arr)cin >> i;

	mergesort(0, n);

	for (int i : arr)
	{
		cout << i << '\n';
	}


	return 0;
}