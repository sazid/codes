#include <stdio.h>
#include <ctype.h>	// toupper() function

char pos[26] = {
	'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
	'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
	'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
};

/**
 * Returns the position of the encrypted character
 */
int get_pos(char c) {
	int i;
	for (i = 0; i < 26; i++) {
		if (c == pos[i]) {
			return i;
		}
	}

	return 0;
}

/**
 * This function encodes a given character with the following formula:
 * f(c) = (c + shift) MOD 26
 */
char encode(char c, int shift) {
	if (c >= 'a' && c <= 'z') {
		// uses ascii value of small letters
		// 'a' - 97
		// 'z' - 122
		// if the character is in lower case, convert it to uppercase
		c = toupper(c);
	}

	// isalpha is a standard library function
	if (!isalpha(c)) {
		// if the character is not a alphabet return it as is
		return c;
	}

	return pos[(get_pos(c) + shift) % 26];
}

/**
 * This function decodes the given character by taking the inverse
 * of the encode function:
 * f(c) = (c - shift) MOD 26
 */
char decode(char c, int shift) {
	if (c >= 'a' && c <= 'z') {
		// if the character is in lower case, convert it to uppercase
		c = toupper(c);
	}
	
	if (!isalpha(c)) {
		// if the character is not a alphabet return it as is
		return c;
	}

	return pos[(get_pos(c) - shift) % 26];
}

int main() {
	int i, j;
	char c;
	int choice;

	// Input and output file
	FILE *in;
	FILE *out;

	printf("1 - Encode file\n");
	printf("2 - Decode file\n");
	printf("Choose option: ");
	scanf("%d", &choice);

	switch (choice) {
		case 1:
		case 2:
			break;
		default:
			printf("Try again\n");
			break;
	}

	// open the input and output files
	in = fopen("in.txt", "r");
	out = fopen("out.txt", "w");

	if (in && out) {
		if (choice == 1) {
			// encode choice
			while ((c = getc(in)) != EOF) {
				putc(encode(c, 3), out);
			}
		} else if (choice == 2) {
			// decode
			while ((c = getc(in)) != EOF) {
				putc(decode(c, 3), out);
			}
		}
	} else {
		printf("Cannot open file 'in.txt' for input/output\n");
	}

	return 0;
}
