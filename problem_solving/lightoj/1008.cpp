// 1008 - Fibsieve`s Fantabulous Birthday

#include <bits/stdc++.h>
#define f(n) for (int ii = 0; ii < n; ii++)
#define f1(n) for (int ii = 1; ii <= n; ii++)
typedef long long ll;
using namespace std;

int main() {
    int T;
    scanf("%d", &T); // NOLINT
    f1(T) {
        ll S, x = 0, y = 0, t, maximum, mid;
        scanf("%lld", &S); // NOLINT

        t = static_cast<ll>(ceil(sqrt(S)));
        maximum = t*t;
        mid = maximum - t + 1;

//        printf("t: %lld\nMax: %lld\nMid: %lld\n", t, maximum, mid);

        if (S == mid) {
            x = y = t;
            goto print;
        }

        if (t & 1) {
            if (S > mid) {
                y = t;
                x = t - (S - mid);
            } else {
                x = t;
                y = t - (mid - S);
            }
        } else {
            if (S > mid) {
                x = t;
                y = t - (S - mid);
            } else {
                y = t;
                x = t - (mid - S);
            }
        }

        print:
        printf("Case %d: %lld %lld\n", ii, x, y);
    }

    return 0;
}