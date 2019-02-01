// https://atcoder.jp/contests/dp/tasks/dp_c
// AC 26ms 2560 KB

#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int (i) = a; (i) < b; ++(i))
#define maxi(a, b) ((a) = max((a), (b)))

int N;
int arr[100005][3];
int dp[100005][3];

void read() {
	cin >> N;
	rep(i,1,N+1) rep(j,0,3)
		cin >> arr[i][j];
}

void solve() {
	rep(i,0,3) dp[0][i]=0;

	rep(i,1,N+1) {
		rep(p,0,3) dp[i][p]=INT_MIN;
		rep(j,0,3) rep(k,0,3)
			if (k != j) maxi(dp[i][j], arr[i][j] + dp[i-1][k]);
	}

	int ans = INT_MIN;
	rep(i,0,3) maxi(ans, dp[N][i]);
	cout << ans << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	read();
	solve();
	return 0;
}

