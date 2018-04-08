#include <stdio.h>

void search(int x[], int size, int num_to_search) {
	int i;

	// 1 represents true
	// 0 represents false
	// assume that we could not find the number
	int number_found = 0;

	for (i = 0; i < size; i++) {
		if (num_to_search == x[i]) {
			number_found = 1;
			break;
		}
	}

	if (number_found == 1) {
		printf("Number found in the array.\n");
	} else {
		printf("Number NOT found in the array.\n");
	}
}

int main() {
	int n[5] = {23, 4, 54, 23, 765};

	// search for the number 4
	search(n, 5, 4);

	// search for 100
	search(n, 5, 100);

	return 0;
}
