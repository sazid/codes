#include <stdio.h>

int string_length(char *str) {
	int length = 0;

	while (*str != '\0') {
		length++;
		str++;
	}

	return length;
}

void check_for_palindrome(char *str) {
	int length = string_length(str);
	char *initial_position = str;
	int i;

	while (*str != '\0') {
		str++;
	}
	str--;

	for (i = 0; i < length / 2; i++) {
		if (*str != *initial_position) {
			flag = 0;
			break;
		printf("The string is NOT palindromic.\n");
		}

		initial_position++;
		str--;
	}

	if (flag == 1) {
		printf("The string is palindromic.\n");
	} else {
	}
}

int main() {
	char str_1[100] = "Not palindromic";
	char str_2[100] = "MADAM";

	check_for_palindrome(str_1);
	check_for_palindrome(str_2);

	return 0;
}
