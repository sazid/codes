#include <bits/stdc++.h>
#define PB push_back
#define vi vector<int>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--) {
		int first=0, last=0, n, k, x, maxd=0, prev;
		cin >> n >> k;
		bool A[n+1];
		while (k--) {
			cin >> x;
			A[x]=true;
		}

		for (int i = 1; i <= n; i++) {
			if (!first && A[i]) first = i;
			if (A[i]) last = i;
		}

		maxd = max(first, n-last);
		prev = first;

		for (int i = first; i < last; i++) {
			if (i != prev && A[i]) maxd = max((i-prev+1)/2, maxd);
		}

		cout << maxd << endl;
	}

	return 0;
}
