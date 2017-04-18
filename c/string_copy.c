#include <stdio.h>

void string_copy(char *dest, char *src){
	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}
}

int main() {
	char str_1[100] = "Hello World";
	char str_2[100] = "test";
	printf("%s\n", str_2);

	string_copy(str_2, str_1);
	printf("%s\n", str_2);

	return 0;
}
