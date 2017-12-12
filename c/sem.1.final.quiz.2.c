#include <stdio.h>

// 1. Sum of max numbers from each row
int sum_row_max(int x[3][3]) {
	int sum = 0;
	int i, j, max;

	for (i = 0; i < 3; i++) {
		max = x[i][0];
		
		for (j = 0; j < 3; j++) {
			if (max < x[i][j]) {
				max = x[i][j];
			}
		}

		printf("max: %d\n", max);
		sum += max;
	}

	return sum;
}

// 2. Sum of elements
int sum_matrix(int x[3][3]) {
	int sum = 0;
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			sum += x[i][j];
		}
	}

	return sum;
}

// 4. String length
int string_length(char *s) {
	int length = 0;

	while (*s != '\0') {
		length++;
		s++;
	}

	return length;
}

int main() {
	int x[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	// 1. Sum of max from each row
	int sum_max = sum_row_max(x);
	printf("Sum of max from each row is: %d\n", sum_max);

	// 2. Sum of elements
	int sum_elements = sum_matrix(x);
	printf("Sum of all elements is: %d\n", sum_elements);

	// 4. String length
	char *s = "Hello World";
	int length = string_length(s);
	printf("Length of '%s' is %d\n", s, length);

	return 0;
}

