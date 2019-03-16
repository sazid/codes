#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v;
	int n = 0, x;

	while (cin >> x) {
		v.push_back(x);
		++n;

		nth_element(v.begin(), v.begin()+(n/2), v.end());
		if (n & 1) {
			cout << v[n/2] << '\n';
		} else {
			nth_element(v.begin(), v.begin()+(n/2)-1, v.end());
			cout << (v[n/2] + v[(n/2)-1])/2 << '\n';
		}
	}

	return 0;
}

