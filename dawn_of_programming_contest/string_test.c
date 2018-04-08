#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int x, y;
	char c[100];
	scanf("%d %d", &x, &y);
	gets(c);
	gets(c);
	printf("printing ints: %d %d\n", x, y);
	printf("printing gets contents: %s\n", c);

	return 0;
}
