#include <bits/stdc++.h>
using namespace std;

typedef long ll;

const long N = 1e5+10;
long fre[N];
long dp[N];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long n,x,mx=0;
    cin >> n;
    for (long i = 0; i < n; ++i) {
        cin >> x;
        mx = max(mx,x);
        ++fre[x];
    }

    ++mx;
    dp[0] = 0;
    dp[1] = 1 * fre[1];
    for (long i = 2; i <= mx; ++i) {
        dp[i] = max(dp[i-1], dp[i-2] + (freq[i] * i));
    }

    cout << dp[mx] << endl;

    return 0;
}
