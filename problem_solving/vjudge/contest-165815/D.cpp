#include <bits/stdc++.h>
#define f(a, b) for (int i = a; i <= b; i++)

using namespace std;

int main()
{
	int n, a, b, c, k = 1;
	scanf("%d", &n);;
	while (n--)
	{
		c = 0;
		scanf("%d %d", &a, &b);
		f(a, b)
		{
			bool is_prime = true;
			if (i == 1) is_prime = false;
			else
			{
				int root = sqrt(i);
				for (int j = 2; j <= root; j++)
				{
					if (i % j == 0)
					{
						is_prime = false;
						break;
					}
				}
			}
			if (is_prime)
			{
				c++;
			}
		}
		printf("Case %d: %d\n", k, c);
		k++;
	}

	return 0;
}
