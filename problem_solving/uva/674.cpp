#include <bits/stdc++.h>
using namespace std;

long long coins[5] = {50, 25, 10, 5, 1};
long long dp[100][8000];

long long f(long long i, long long amount) {
    if (i >= 5) {
        if (amount == 0) return 1;
        else return 0;
    }
    if (dp[i][amount] != -1) return dp[i][amount];

    long long p1 = 0, p2 = 0;

    if (amount - coins[i] >= 0)
        p1 = f(i, amount - coins[i]);
    p2 = f(i+1, amount);

    dp[i][amount] = p1 + p2;
    return dp[i][amount];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(dp, -1, sizeof(dp));
    int make;
    while (cin >> make) {
        cout << f(0, make) << endl;
    }
    return 0;
}

