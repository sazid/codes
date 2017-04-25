#include <stdio.h>

void print_pyramid(int n) {
	int i, j;

	for (i = 1; i <= n; i++) {
		// print the asterisks
		for (j = 1; j < i; j++) {
			printf("* ");
		}

		// print the numbers
		for (j = i; j <= n; j++) {
			printf("%d ", j);
		}

		// add a new line at the end
		printf("\n");
	}

	printf("\n");
}

int main() {
	print_pyramid(5);

	return 0;
}
