#include <bits/stdc++.h>
using namespace std;

bool cmp(char a, char b) {
	if (tolower(a) == tolower(b)) {
		return a < b;
	}
	return tolower(a) < tolower(b);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s;
	int T;
	cin >> T;
	while (T--) {
		cin >> s;
		sort(s.begin(), s.end(), cmp);
		cout << s << endl;
		while (next_permutation(s.begin(), s.end(), cmp)) {
			cout << s << endl;
		}
	}

	return 0;
}
