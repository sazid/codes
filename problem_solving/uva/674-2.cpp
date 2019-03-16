#include <bits/stdc++.h>
using namespace std;

int coin[] = {50, 25, 10, 5, 1};
int make, n = sizeof coin/sizeof coin[0];
int dp[6][8000];

int f(int i, int sum) {
	if (sum == 0) return 1;
	if (i >= n) return 0;
	if (dp[i][sum] != -1) return dp[i][sum];

	int p = 0;
	if (sum - coin[i] >= 0)
		p = f(i, sum - coin[i]);
	int q = f(i+1, sum);
	return dp[i][sum] = p+q;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	memset(dp, -1, sizeof dp);
	while(cin>>make)
		cout << f(0, make) << '\n';

	return 0;
}

