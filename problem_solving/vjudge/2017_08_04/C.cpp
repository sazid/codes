#include <bits/stdc++.h>

using namespace std;

int m[1000000] = {0};

int main() {
	int n;
	cin >> n;
	int i;

	for (int i = n; i >= 1; i--) {
		if (n % i == 0 && m[i] != 1 && m[n/i] != 1) {
			m[i] = 1;
			m[n / i] = 1;
			cout << i << endl;
		}
	}
	cout << 1 << endl;

	return 0;
}
