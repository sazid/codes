#include <stdio.h> 

int string_length(char *str) {
	int length = 0;

	while (*str != '\0') {
		length++;
		str++;
	}

	return length;
}

/**
 * This function will
 * return 1 when BOTH STRINGS ARE EQUAL
 * return 0 when NOT EQUAL
 */
int string_compare(char *s1, char *s2) {
	// first check if the length of both strings are equal
	// if they are not equal then return 0
	int length_s1 = string_length(s1);
	int length_s2 = string_length(s2);
	if (length_s1 != length_s2) {
		return 0;
	}

	while (*s1 != '\0') {
		if (*s1 != *s2) {
			return 0;
		}

		s1++;
		s2++;
	}

	return 1;
}

int main() {
	char a[100] = "Hello!";
	char b[100] = "Hello!";
	char c[100] = "Hello World!";

	// store the result in two variables
	int compare_a_b = string_compare(a, b);
	int compare_a_c = string_compare(a, c);

	// print the result
	if (compare_a_b == 1) {
		printf("'%s' and '%s' are equal.\n", a, b);
	} else {
		printf("'%s' and '%s' are not equal.\n", a, b);
	}

	if (compare_a_c == 1) {
		printf("'%s' and '%s' are equal.\n", a, c);
	} else {
		printf("'%s' and '%s' are not equal.\n", a, c);
	}

	return 0;
}
