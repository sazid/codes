#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int count = 0;
	while (n-- > 0) {
		int x, y, z, c=0;
		cin >> x >> y >> z;
		if (x == 1) c++;
		if (y == 1) c++;
		if (z == 1) c++;

		if (c >= 2) count++;
	}
	cout << count << "\n";

	return 0;
}