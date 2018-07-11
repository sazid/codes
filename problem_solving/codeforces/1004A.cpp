#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dst(ll x, ll y) {
    if (x < 0 and y < 0) {
        if (abs(x) > abs(y)) return abs(x)-abs(y);
        return abs(y) - abs(x);
    } else if (x < 0 and y > 0) {
        return y - x;
    } else if (y < 0 and x > 0) {
        return x - y;
    } else if (x > 0 and y > 0) {
        return max(x, y) - min(x, y);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, d, x[105];
    cin >> n;
    for (ll i = 0; i < n; i++) cin >> x[i];

    ll c = 2;
    d = 2*d-1;
    for (ll i = 0; i < n-1; i++) {
        if (dst(x[i+1], x[i]) >= d) c++;
    }
    cout << c << endl;

    return 0;
}

