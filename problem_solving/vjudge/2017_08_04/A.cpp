#include <bits/stdc++.h>
#define f(n) for (int ii = 0; ii < n; ii++)

using namespace std;

int main() {
	int n;
	cin >> n;
	double x, y;

	while (n--) {
		cin >> x >> y;
		printf("%.5lf\n", x * y);
	}

	return 0;
}
