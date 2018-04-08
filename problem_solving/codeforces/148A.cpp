#include <bits/stdc++.h>
#define REP(i, a, b) for (unsigned long i = a; i <= b; i += a)
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	unsigned long k, l, m, n, d, c=0;
	cin >> k >> l >> m >> n >> d;
	bool stat[d+1] = {};

	REP(i, k, d) {
		if (stat[i] == 0) {
			stat[i] = 1;
			c++;
		}
	}

	REP(i, l, d) {
		if (stat[i] == 0) {
			stat[i] = 1;
			c++;
		}
	}

	REP(i, m, d) {
		if (stat[i] == 0) {
			stat[i] = 1;
			c++;
		}
	}

	REP(i, n, d) {
		if (stat[i] == 0) {
			stat[i] = 1;
			c++;
		}
	}

	cout << c << endl;

	return 0;
}