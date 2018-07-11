#include <bits/stdc++.h>
using namespace std;

bool pal(string s) {
	auto sz = s.size();
	for (int i = 0; i < sz/2+1; ++i)
		if (s[i] != s[sz-i-1]) return false;
	return true;
}

bool lex(string s, string l) {
	auto sz = s.size();
	auto lz = l.size();

	bool f = true;
	for (int i = 0; i < min(sz,lz); ++i)
	{
		if (s[i] < l[i]) {
			f = false;
			break;
		}
	}
	return f;
}

int main() {
	string str, l, s;
	cin >> str, l = str;

	auto n = str.size();
	for (int i = 0; i < (1 << n); i++) {
		s = "";
		// for (int j = 0; j <= i; j++) {
		for (int j = 0; j < n; j++) {
			if ( (1 << j) & i ) s += str[j];
		}

		if (pal(s) and lex(s, l)) l = s;
	}
	cout << l << endl;

	return 0;
}
