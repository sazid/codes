#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	while (cin >> s && s != "#") {
		bool f = next_permutation(s.begin(), s.end());
		if (f) cout << s << '\n';
		else cout << "No Successor\n";
	}

	return 0;
}

