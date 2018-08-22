#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, x, y;
	cin >> n >> m;
	int arr[m+5];
	memset(arr, 0, sizeof(arr));

	while (n--) {
		cin >> x >> y;
		for (int i = x; i <= y; i++) arr[i] = 1;
	}

	int cnt = 0;
	for (int i = 1; i <= m; i++) {
		if (arr[i] == 0) {
			cnt++;
		}
	}
	cout << cnt << endl;

	for (int i = 1; i <= m; i++) {
		if (arr[i] == 0) {
			cout << i << ' ';
		}
	}
	cout << endl;

	return 0;
}

