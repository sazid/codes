#include <bits/stdc++.h>
using namespace std;

int arr[int(1e5)+5];
int n, q;

int bs(int key, bool lb) {
	int l = 0, r = n - 1, mid, ans = -1;

	while (l <= r) {
		mid = l + (r - l)/2;

		if (arr[mid] == key) {
			ans = mid;
			r = lb ? mid - 1 : r;
			l = lb ? mid + 1 : l;
		}
		else if (arr[mid] < key) l = mid + 1;
		else r = mid - 1;
	}

	return ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i) cin >> arr[i];

	int x, lo, hi;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		cin >> x;
		lo = bs(x, true);
		hi = bs(x, false);

		lo == -1 ? cout << "X " : cout << lo+1 << ' ';
		hi == -1 ? cout << "X\n" : cout << hi+1 << '\n';
	}

	return 0;
}

