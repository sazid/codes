#include <bits/stdc++.h>
#define f(n) for (int ii = 0; ii < n; ii++)

using namespace std;

int mem[1000] = {0};

int fib(int n) {
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else {
		if (mem[n-1] == 0)
			mem[n-1] = fib(n-1);
		if (mem[n-2] == 0)
			mem[n-2] = fib(n-2);

		return mem[n-2] + mem[n-1];
	}
}

int main() {
	int k, s=0;
	cin >> k;

	for (int i = 0; i <= k; i++) {
		s += fib(i);
	}

	cout << s << endl;

	return 0;
}
