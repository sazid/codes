#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	ull n = ((a * (double) 1000000000.0)/b);
	bool found = false;
	string s;
	while (n > 0) {
		ull r = n % 10;
		s = to_string(r) + s;
		n /= 10;
	}
	ull i;
	for (i = 0; i < s.size(); i++) {
		if (s[i] - '0' == c) {
			found = true;
			break;
		}
	}
	if (found) cout << i+1 << endl;
	else cout << -1 << endl;
	return 0;
}
