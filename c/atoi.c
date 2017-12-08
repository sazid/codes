#include <stdio.h>

int a_to_i(char *str) {
	int n;
	int number = 0;

	while (*str != '\0') {
		switch(*str) {
			case '0':
				n = 0;
				break;
			case '1':
				n = 1;
				break;
			case '2':
				n = 2;
				break;
			case '3':
				n = 3;
				break;
			case '4':
				n = 4;
				break;
			case '5':
				n = 5;
				break;
			case '6':
				n = 6;
				break;
			case '7':
				n = 7;
				break;
			case '8':
				n = 8;
				break;
			case '9':
				n = 9;
				break;
			default:
				printf("ERROR! Non numeric characters are not allowed.\n");
				return -1;
		}

		number = (number * 10) + n;
		str++;
	}

	return number;
}

int main() {
	char *x = "123404300";
	int n = a_to_i(x);
	printf("%d\n", n);

	return 0;
}

