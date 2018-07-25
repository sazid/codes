#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll arr[10005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, count, x;

    while (true) {
        cin >> n;
        if (n == 0) break;

        ll pos = 0, sum = 0, possum = 0;
        ll prev = 0;
        
        for (ll i = 0; i < n; i++) cin >> arr[i];

        sum = arr[0];
        if (arr[0] > 0)
            possum = arr[0], prev = arr[0];

        for (ll i = 1; i < n; i++) {
            sum += arr[i];

            if (arr[i] > 0 and arr[i-1] > 0) {
                possum += arr[i];
            } else if (arr[i] > 0) {
                possum = arr[i];
            }
            prev = max(prev, possum);
        }

        if (sum > 0) cout << "The maximum winning streak is " << prev << ".\n";
        else cout << "Losing streak.\n";
    }

    return 0;
}

