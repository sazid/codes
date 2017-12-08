#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	while (T-- > 0) {
		int n;
		cin >> n;
		int a = 0, b = 0;
		if (n == 20) {
			a = 10;
			b = 10;
		}else if (n <= 10) {
			a = n;
		} else {
			b = n%10;
			a = n-b;
		}

		cout << a << " " << b << "\n";
	}

	return 0;
}