#include <bits/stdc++.h>
#define PB push_back
using namespace std;

bool check(vector<bool> &v) {
	for (auto i : v) {
		if (!i) return false;
	}
	return true;
}

void printvec(std::vector<bool> &v) {
	for (auto i : v) cout << i << " ";
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t, n, k, x, c;
	std::vector<bool> v;
	cin >> t;
	while (t--) {
		c = 1;
		v.clear();
		cin >> n >> k;
		v.resize(n);
		while (k--) {
			cin >> x;
			v[x-1] = true;
		}

		auto s = v.begin(),
			e = v.end();

		while (true) {
			for (auto it = s; it != e; it++) {
				if (*it) {
					if (it != s) *(it-1) = true;
					if (it != e) *(it + 1) = true;
					c++;
				}
			}
			if (check(v)) break;
		}
		
		cout << c << endl;
	}

	return 0;
}
