// https://atcoder.jp/contests/dp/tasks/dp_a
// AC 12ms 4224KB
#include <bits/stdc++.h>
using namespace std;

const int NAX = int(1e5) + 5;

int arr[NAX];
int dp[NAX];

int N;

int solve(int i) {
	if (i >= N) return 0;
	if (dp[i] != -1) return dp[i];
		
	int a = abs(arr[i]-arr[i+1]) + solve(i+1);
	int b = N-i >= 2 ? abs(arr[i]-arr[i+2]) + solve(i+2) : INT_MAX;
	
	return dp[i] = min(a, b);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	memset(dp, -1, sizeof(dp));
	
	cin >> N;
	for (int i = 1; i <= N; ++i) cin >> arr[i];
	
	cout << solve(1) << endl;
	
	return 0;
}
