// https://open.kattis.com/problems/tri
#include <bits/stdc++.h>
#define ck if (!f) return 0;
using namespace std;

void prn(int a, int b, int c) {
	if (a+b == c) {
		printf("%d+%d=%d\n", a, b, c);
	} else if (a-b == c) {
		printf("%d-%d=%d\n", a, b, c);
	} else if (a/b == c) {
		printf("%d/%d=%d\n", a, b, c);
	} else if (a*b == c) {
		printf("%d*%d=%d\n", a, b, c);
	} else if (a == b+c) {
		printf("%d=%d+%d\n", a, b, c);
	} else if (a == b-c) {
		printf("%d=%d-%d\n", a, b, c);
	} else if (a == b/c) {
		printf("%d=%d/%d\n", a, b, c);
	} else if (a == b*c) {
		printf("%d=%d*%d\n", a, b, c);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	prn(a,b,c);

	return 0;
}

