#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

pair<ll, ll> times[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll T, n, x, y;
    cin >> T;

    while (T--) {
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cin >> x >> y;
            times[i] = {y, x};
        }
    
        sort(times, times+n);

        ll end = times[0].first;
        ll count = 1;

        for (ll i = 1; i < n; i++) {
            if (times[i].second >= end) {
                end = times[i].first;
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}

