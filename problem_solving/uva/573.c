#include <stdio.h>

int main() {
	int H, D, F, c, days;
	float U, f, s;

	while(1) {
		scanf("%d %f %d %d", &H, &U, &D, &F);
		if (H == 0) break;

		days = 1;
		s = 0;
		f = U*F/100.0;

		while (1) {
			s += U;

			if (U > 0) U -= f;

			if (s > H) break;

			s -= D;
			if (s < 0) break;

			days++;
		}
		
		if (s < 0) printf("failure on day %d\n", days);
		else printf("success on day %d\n", days);
	}

	return 0;
}
