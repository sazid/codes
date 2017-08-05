#include <bits/stdc++.h>
#define f(n) for (int ii = 0; ii < n; ii++)

using namespace std;

int ab(int a, int b) {
	if (a > b) {
		return a - b;
	} else {
		return b - a;
	}
}

int main() {
	int n;
	cin >> n;
	string a, b;
	int op = 0;
	int la, lb;

	while (n--) {
		cin >> a >> b;
		la = a.length();
		lb = b.length();

		op += ab(la, lb);

		if (la > lb) {
			for (int i = 0; i < lb; i++) {
				if (a[i] != b[i]) {
					op++;
				}
			}
		} else {
			for (int i = 0; i < la; i++) {
				if (a[i] != b[i]) {
					op++;
				}
			}
		}
	}

	cout << op << endl;

	return 0;
}
