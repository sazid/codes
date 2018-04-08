#include <bits/stdc++.h>

#define rep(T, i, a, b) for(T (i)=(a); (i) < (b); (i)++)
#define repe(T, i, a, b) for(T (i)=(a); (i) <= (b); (i)++)

using namespace std;

typedef unsigned long ll;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll i, j;
    while (scanf("%lu %lu", &i, &j) == 2) {
        ll a = i;
        ll b = j;
        if (i > j) swap(a, b);
        ll m = 0;

        repe(ll, x, a, b) {
            ll c = 1, n = x;
            while (n > 1) {
                if (n&1) n = 3*n + 1;
                else n = n >> 1;
                c++;
            }
            m = max(c, m);
        }

        printf("%lu %lu %lu\n", i, j, m);
    }
    

    return 0;
}
