#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s, t;
	size_t ssz, tsz;

	cin >> ssz >> tsz;
	cin >> s >> t;

	if (ssz-1 > tsz) {
		cout << "NO\n";
		return 0;
	}

	if (ssz == tsz and s == t) {
		cout << "YES\n";
		return 0;
	} else if (ssz == tsz) {
		cout << "NO\n";
		return 0;
	}

	// if no * is present
	size_t pos = s.find('*'); 
	if (pos == string::npos) {
		cout << "NO\n";
		return 0;
	} 

	size_t i;
	for (i = 0; i < pos; ++i) {
		if (s[i] != t[i]) {
			cout << "NO\n";
			return 0;
		}
	}

	if (pos == ssz-1) {
		cout << "YES\n";
		return 0;
	}

	if (i == pos and s[i] != '*') {
		cout << "NO\n";
		return 0;
	}

	++i;

	size_t p = t.find(s[i]);

	if (p == string::npos) {
		cout << "NO\n";
		return 0;
	}

	if (s.substr(i, ssz) == t.substr(p, tsz)) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}

	return 0;
}

