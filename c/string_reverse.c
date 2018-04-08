#include <stdio.h>

int string_length(char *str) {
	int length = 0;

	while (*str != '\0') {
		length++;
		str++;
	}

	return length;
}

void string_reverse(char *str) {
	int length = string_length(str);
	char *initial_pos = str;
	int i;
	char temp;

	while (*str != '\0') {
		str++;
	}
	
	// we don't want to start counting from \0
	// so we'll go back to the position before it
	str--;

	for (i = 0; i < length / 2; i++) {
		temp = *initial_pos;
		*initial_pos = *str;
		*str = temp;

		initial_pos++;
		str--;
	}
}

int main() {
	char str[100] = "TEST STRING";

	// print before reversing
	printf("%s\n", str);

	string_reverse(str);

	// print after reversing
	printf("%s\n", str);

	return 0;
}
