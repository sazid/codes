#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, i = 1;

    scanf("%d", &T);
    while (T-- > 0) {
        set <long long> divisors;
        long long P, L, sq, n;
        scanf("%lld %lld", &P, &L);
        printf("Case %d: ", i++);

        n = P - L;
        sq = static_cast<long long int>(sqrt(n) + 1);

        for (long long Q = 1; Q <= sq; Q++) {
            if (n % Q == 0) {
                if (n/Q == Q && L < Q) divisors.insert(Q);
                else {
                    if (L < Q) {
                        divisors.insert(Q);
                    }
                    if (L < n/Q) {
                        divisors.insert(n/Q);
                    }
                }
            }
        }

        if (divisors.empty()) {
                printf("impossible\n");
        } else {
            long long size=0;
            for (set<long long>::iterator it = divisors.begin(); it != divisors.end(); ++it) {
                if (size == divisors.size()-1)
                    printf("%lld", *it);
                else 
                    printf("%lld ", *it);
                size++;
            }

            printf("\n");
        }
    }

    return 0;
}