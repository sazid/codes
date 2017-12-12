#include <stdio.h>

int (*return_2d_array())[] {
	int x[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int (*r)[] = x;

	return r;
}

int main() {
	int (*n)[3] = return_2d_array();

	int i;
	int j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\n", n[i][j]);
		}
	}

	return 0;
}
