#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int ax, ay, az, bx, by, bz;
	cin >> ax >> ay >> az >> bx >> by >> bz;

	bool opposite = false;

	if (ax != bx && ay != by && az != bz) opposite = true;

	if (opposite) cout << "NO\n";
	else cout << "YES\n";

	return 0;
}
