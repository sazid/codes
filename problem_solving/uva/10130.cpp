#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll P[105], W[35], dp[105][35], N, CAP;

ll f(ll i, ll w) {
    if (i > N) return 0;
    if (dp[i][w] != -1) return dp[i][w];

    ll p1, p2;

    if (w + W[i] <= CAP)
        p1 = P[i] + f(i+1, w + W[i]);
    else p1 = 0;

    p2 = f(i+1, w);

    dp[i][w] = max(p1, p2);
    return dp[i][w];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll T, G, total = 0;
    cin >> T;
    while (T--) {
        total = 0;
        cin >> N;
        for (ll i = 1; i <= N; i++) cin >> P[i] >> W[i];
        cin >> G;
        while (G--) {
            cin >> CAP;
            for (ll i = 0; i < 105; i++) for (ll j = 0; j < 35; j++) dp[i][j] = -1;
            total += f(1, 0);
        }
        cout << total << endl;
    }

    return 0;
}

