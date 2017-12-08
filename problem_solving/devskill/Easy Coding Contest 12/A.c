#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		char s[20];
		scanf("%s", s);
		int i;
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] += 32;
			else if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		printf("%s\n", s);
	}
	return 0;
}