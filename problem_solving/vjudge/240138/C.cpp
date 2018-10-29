#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dp[55][55][55];
ll LL_MAX = numeric_limits<ll>::max();

ll f(ll a, ll b, ll c, ll op) {
    if (a > 53 or b > 53 or c > 53) return LL_MAX;
    if (a == b and b == c) return op;
    if (dp[a][b][c] != -1) return dp[a][b][c];

    ll A = f(a+2, b, c, op+1);
    ll B = f(a, b+2, c, op+1);
    ll C = f(a, b, c+2, op+1);
    ll AB = f(a+1, b+1, c, op+1);
    ll BC = f(a, b+1, c+1, op+1);
    ll CA = f(a+1, b, c+1, op+1);
    dp[a][b][c] = min({A, B, C, AB, BC, CA});
    return dp[a][b][c];
}

int main() {
    ll a, b, c;
    cin >> a >> b >> c;
    memset(dp, -1, sizeof(dp));
    cout << f(a, b, c, 0) << endl;

    return 0;
}

