// 1015 - Brush (I)

#include <bits/stdc++.h>
#define f(n) for (int kk = 0; kk < n; kk++)
#define f1(n) for (int ii = 1; ii <= n; ii++)
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	long sum=0, n;
	int p;
	f1(T) {
		scanf("%d", &n);
		while (n-- > 0) {
			scanf("%d", &p);
			printf("sum %d\n", sum);
			sum+=p;
		}

		if (ii == T)
			printf("Case %d: %d", ii, sum);
		else
			printf("Case %d: %d\n", ii, sum);
	}

	return 0;
}