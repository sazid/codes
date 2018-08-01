#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

int main() {
	int T, n;
	double R;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		scanf("%lf %d", &R, &n);
		printf("Case %d: %.9lf\n", i, R*sin(PI/n)/(sin(PI/n) + 1));
	}
	return 0;
}

