#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, x, y, neg=0, pos=0;
	cin >> n;
	while (n--) {
		cin >> x >> y;
		if (x < 0) neg++;
		else pos++;
	}
	if (neg == 0) cout << "Yes\n";
	else if (pos == 0) cout << "Yes\n";
	else if (neg == 1) cout << "Yes\n";
	else if (pos == 1) cout << "Yes\n";
	else cout << "No\n";
	return 0;
}
