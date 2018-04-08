// https://open.kattis.com/problems/quickbrownfox
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	string s;
	cin >> N;
	cin.ignore();
	while(N--) {
		getline(cin, s);
		set<char> v;
		int a[128] = {0};
		for (char c : s) {
			c = tolower(c);
			a[(int)c]++;
		}
		for (char c = 'a'; c <= 'z'; c++) {
			if (!a[(int)c]) v.insert(c);
		}
		
		if (v.empty()) cout << "pangram\n";
		else {
			cout << "missing ";
			for (char c : v) cout << c;
			cout << "\n";
		}
	}

	return 0;
}
