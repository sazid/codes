#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	auto i = 0;
	auto j = 0;
	char c;
	for (i = 0; i < s.size(); i++) {
		c = s[i];
		while (i+1 < s.size() && c == s[i+1]) {
			s.erase(i+1, 1);
		}
	}
	cout << s << endl;

	return 0;
}
