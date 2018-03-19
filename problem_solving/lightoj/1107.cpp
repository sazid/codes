#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x, y, p, q, T, M, a, b;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> x >> y >> p >> q;
		cin >> M;
		cout << "Case " << i << ":" << endl;
		while (M--) {
			cin >> a >> b;
			if (a>x && b>y && a<p && b<q) {
				cout << "Yes\n";
			} else {
				cout << "No\n";
			}
		}
	}
	return 0;
}

