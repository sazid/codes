#include <iostream>
using namespace std;
typedef long long ull;

ull seq(string a, string b) {
	ull sum = 0, p1 = 0, p2 = 0;

	for (char c : a) {
		if (c == b[p2]) p2++;
	}

	return p2;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	while (cin >> a >> b) {
		cout << seq(a, b) << "\n";
	}
	return 0;
}
