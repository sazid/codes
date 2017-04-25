#include <stdio.h>

// NOTE: Addition of string is also known as concatenation
void string_concat(char *dest, char *src) {
	while (*dest != '\0') {
		dest++;
	}

	while (*src != '\0') {
		*dest = *src;
		src++;
		dest++;
	}
}

int main() {
	char str_1[100] = "STRING ONE ";
	char str_2[100] = "STRING TWO";

	string_concat(str_1, str_2);
	printf("%s\n", str_1);

	return 0;
}
