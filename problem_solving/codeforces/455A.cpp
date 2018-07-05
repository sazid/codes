#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

const ll N = 1e5+10;
ll cnt[N];
ll dp[N];
ll n;

/*
long f(long i) {
    if (dp[i] != -1) return dp[i];
    if (i <= 0) return 0;
    if (i == 1) return cnt[1];

    dp[i] = max(f(i-1), f(i-2) + cnt[i]*i);
    return dp[i];
}
*/

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll x, mx = 0;
    cin >> n;
    for (ll i = 0; i < n; i++) {
        cin >> x;
        cnt[x]++;
        mx = max(mx, x);
    }

    mx++;
    dp[0] = 0;
    dp[1] = 1 * cnt[1];
    for (ll i = 2; i <= mx; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + i * cnt[i]);
    }
    cout << dp[mx-1] << endl;

    return 0;
}

