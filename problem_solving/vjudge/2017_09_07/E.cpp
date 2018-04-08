#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k, T, c=0;
	cin >> n >> k;
	int scores[n];
	for (int i=0; i<n;i++) {
		cin >> scores[i];
		if (i == k-1) T=scores[i];
	}
	for (int i=0; i<n; i++) {
		if (scores[i] > 0 && scores[i] >= T) c++;
	}
	cout << c << "\n";

	return 0;
}