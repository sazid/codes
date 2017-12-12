#include <stdio.h>
#include <stdlib.h>
int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int p, i;
		char n[20];
		scanf("%s %d", n, &p);
		for (i = 0; i < p; i++)
		{
			n[i] = '9';
		}
		printf("%d\n", atoi(n));
	}
	return 0;
}
