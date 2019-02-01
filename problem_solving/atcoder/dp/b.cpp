// https://atcoder.jp/contests/dp/tasks/dp_b
#include <bits/stdc++.h>
using namespace std;

int N, k;
int dp[100005];
int arr[100005];

void mini(int &a, int b) {
	a = min(a, b);
}

void read() {
	cin >> N >> k;
	for (int i= 1; i <= N; i++) cin >> arr[i];
}

void solve() {
	dp[1] = 0;
	for (int i = 2; i <= N; ++i) {
		dp[i] = INT_MAX;
		for (int j = 1; i-j > 0 and j <= k; ++j) {
			mini(dp[i], abs(arr[i]-arr[i-j])+dp[i-j]);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	read();
	solve();

	cout << dp[N] << endl;

	return 0;
}

