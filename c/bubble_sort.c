#include <stdio.h>

int main() {
	int my_array[] = {23, 54, 23, 564, 12, -23, 54, -23, -542, 0};
	int size = 10;
	int n;
	int i;

	scanf("%d", &n);

	for (i = 0; i < size; i++) {
		if (my_array[i] == n) {
			printf("Index: %d\n", i);
			printf("Value: %d\n", n);
			break;
		}
	}

	return 0;
}
