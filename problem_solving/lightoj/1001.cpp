#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, a, b;
	cin >> n;
	while(n--) {
		cin >> a;
		if (a == 20) {
			a=10;
			b=10;
		} else if (a >= 10) {
			b = a % 10;
			a -= b;
		}
		else b = 0;

		cout << a << " " << b << "\n";
	}
	return 0;
}
