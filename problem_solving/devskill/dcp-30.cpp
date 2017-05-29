#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)

using namespace std;

void countAndPrint(char in[])
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		int nums = 0;
		for (char *i = in; *i != '\0'; i++)
		{
			if (*i == c) nums++;
		}
	
		if (nums > 0) printf("%c %d\n", c, nums);
	}
}

int main()
{
	int n;
	char in[100];

	cin >> n;
	f(n)
	{
		scanf("%s", in);
		
		printf("Case %d:\n", i+1);
		countAndPrint(in);
	}

	return 0;
}
