#include <stdio.h>

int string_length(char *str) {
	int length = 0;

	while (*str != '\0') {
		length++;
		str++;
	}

	return length;
}

int main() {
	char string[100] = "TEST STRING";
	int length;
	
	length = string_length(string);

	printf("Length of the string is %d\n", length);

	return 0;
}
