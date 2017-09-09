#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	if (n==2) cout << "NO\n";
	else if (n&1) cout << "NO\n";
	else cout << "YES\n";

	return 0;
}