#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	map<string, int> m;
	int n;
	string s;
	cin >> n;
	while(n--){
		cin>>s;
		if (m.find(s) == m.end()) {
			cout << "OK\n";
			m[s] = 1;
		} else {
			cout << s << m[s] << '\n';
			++m[s];
		}
	}

	return 0;
}

