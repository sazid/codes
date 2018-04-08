#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ull T, N, p, sum;
	string s;
	cin >> T;
	for (ull i=1; i<=T; i++) {
		sum=0;
		cout << "Case " << i << ":" << endl;
		cin >> N;
		while (N--) {
			cin >> s;
			if (s[0] == 'd') {
				cin >> p;
				sum += p;
			} else cout << sum << endl;
		}
	}

	return 0;
}

