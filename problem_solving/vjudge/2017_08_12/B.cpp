#include <bits/stdc++.h>
using namespace std;

int main() {
	// ios::sync_with_stdio(0);
	// cin.tie(0);

	int T, i=1;
	cin >> T;
	while (T-- > 0) {
		cout << "Case " << i << ":\n";
		long long x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int n;
		cin >> n;
		while (n-- > 0) {
			long long a, b;
			cin >> a >> b;
			if (a >= x1 && a <= x2 && b >= y1 && b <= y2) {
				cout << "Yes\n";
			} else {
				cout << "No\n";
			}
		}
		i++;
	}

	return 0;
}