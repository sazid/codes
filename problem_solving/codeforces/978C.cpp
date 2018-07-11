#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ul;

vector<ul> v(1);
ul n, q, x;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> q;
	for (ul i = 1; i <= n; i++) cin >> x, v.push_back(v[i-1]+x);
	while (q--) {
		cin >> x;
		ul pos = lower_bound(v.begin(), v.end(), x)-v.begin();
		ul relpos = x-v[pos-1];
		cout << pos << ' ' << relpos << endl;
	}
	return 0;
}

