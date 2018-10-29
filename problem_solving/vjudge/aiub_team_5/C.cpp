#include <bits/stdc++.h>
#define mx 200005
using namespace std;

int arr[mx];

int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n, m, x, l, r, c0=0, c1=0;
	cin >> n >> m;
	
	// input
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 1) c1++;
		else c0++;
	}

	x = 0;
	bool f = 1;

	// fillup with inverse 0s and 1s
	while (c1 > 0 and c0 > 0) {
		arr[x++] = f ? 1 : -1;
		if (f) c1--;
		else c0--;
		f = !f;
	}
	while (c1-- > 0) arr[x++] = 1;
	while (c0-- > 0) arr[x++] = -1;

	// cumulative sum
	for (int i = 1; i < n; i++) arr[i] += arr[i-1];

	// range queries cumulative sum
	for (int i = 1; i <= m; i++) {
		cin >> l >> r;
		r -= l;
		l = 0;
		if (arr[r] == 0) cout << "1\n";
		else cout << "0\n";;
	}

	return 0;
}
