#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	typedef unsigned long long ul;
	ul n;

	double buf[256*1024];
	int s=0;
	
	while (scanf("%llu", &n) != EOF) {
		buf[s++] = (double)sqrt(n*1.0);
	}

	while (--s >= 0) {
		printf("%.4lf\n", buf[s]);
	}

	return 0;
}