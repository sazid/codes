#include <stdio.h>

int* return_array() {
	int x[10] = {23, 4, 3, 1, 4, 5, 6, 2, 4, 3};
	int *p = x;
	return p;
}

int main() {
	int *x = return_array();
	for (int i = 0; i < 10; i++) {
		printf("%d ", x[i]);
	}

	return 0;
}
