#include <bits/stdc++.h>
using namespace std;

int R, C, dp[10][10];

int f(int i, int j) {
	if (i > R || j > C) return 0;
	if (i == R && j == C) return 1;
	if (dp[i][j] != -1) return dp[i][j];

	dp[i][j] = f(i, j+1) + f(i+1, j);
	return dp[i][j];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		cin >> R >> C;
		memset(dp, -1, sizeof(dp));
		cout << f(1, 1) << endl;
	}
	return 0;
}

