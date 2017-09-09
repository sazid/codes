#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s, n;
	cin >> n;

	for (char c: n) {
		c = tolower(c);
		if (c=='a'||c=='o'||c=='y'||c=='e'||c=='u'||c=='i') continue;
		s.push_back('.');
		s.push_back(c);
	}

	cout << s << "\n";

	return 0;
}