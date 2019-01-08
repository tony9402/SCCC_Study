#include<stdio.h>
#include<string.h>

char input[2000];
char db[] = { ' ', 'A','D','G','J','M','P','T','W' , 126};

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	scanf(" %[^\n]s", input);
	
	int ans = 0;
	int check = -1;
	for (int i = 0; input[i]; i++)
	{
		for (int j = 0; db[j]; j++)
		{
			if (db[j] == input[i])
			{
				ans += n;
				if (j == 0)check = -1;
				else if (j == check)ans += m;
				else check = j;
			}
			else
			{
				if (j >= 1 && db[j - 1] < input[i] && input[i] < db[j])
				{
					int sum = input[i] - db[j - 1] + 1;
					ans += sum * n;
					if (check == j - 1)ans += m;
					else check = j - 1;
				}
			}
		}
	}
	printf("%d", ans);
}