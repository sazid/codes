#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string::size_type size;
	int n;
	cin >> n;
	while (n-- > 0) {
		string s;
		cin >> s;
		size = s.size();
		if (size <= 10) cout << s << "\n";
		else {
			cout << s[0] << size-2 << s[size-1] << "\n";
		}
	}

	return 0;
}