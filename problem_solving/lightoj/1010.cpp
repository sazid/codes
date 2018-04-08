#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	double x, y;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> x >> y;
		cout << "Case " << i << ": " << ceil((x*y)/2.0) << "\n";
	}
	return 0;
}

