#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	while (cin >> n) {
		vector<int> v(n);
		vector<bool> b(n);
		b[0] = true;

		for (int &i : v) cin >> i;

		if (n == 1) {
			cout << "Jolly\n";
			continue;
		}

		for (int i = 0; i < n-1; ++i) {
			if (abs(v[i]-v[i+1]) < n)
				b[ abs(v[i]-v[i+1]) ] = true;
		}

		bool f = true;
		for (bool i : b) {
			if (!i) {
				f = false;
				break;
			}
		}
		if (!f) cout << "Not jolly\n";
		else cout << "Jolly\n";
	}
	return 0;
}

