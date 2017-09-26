#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	double pi = acos(-1);
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		double r;
		scanf("%lf", &r);

		printf("Case %d: %.2lf\n", i, (4*r*r) - (pi*r*r));
	}

	return 0;
}