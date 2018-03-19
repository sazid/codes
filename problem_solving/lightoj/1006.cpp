#include <bits/stdc++.h>

#define MOD 10000007

using namespace std;



typedef unsigned long ull;



ull mem[10010];

ull a, b, c, d, e, f;

ull fn( ull k ) {

    mem[0] = a;

    mem[1] = b;

    mem[2] = c;

    mem[3] = d;

    mem[4] = e;

    mem[5] = f;

    for (ull n = 6; n <= k; n++) {

        ull r = mem[n-1] % MOD;

        r = (r%MOD + mem[n-2]%MOD) % MOD;

        r = (r%MOD + mem[n-3]%MOD) % MOD;

        r = (r%MOD + mem[n-4]%MOD) % MOD;

        r = (r%MOD + mem[n-5]%MOD) % MOD;

        r = (r%MOD + mem[n-6]%MOD) % MOD;

        mem[n] = r % MOD;

    }

    return mem[k]%MOD;

}



int main() {

    ull n, caseno = 0, cases;

    scanf("%lu", &cases);

    while( cases-- ) {

        scanf("%lu %lu %lu %lu %lu %lu %lu", &a, &b, &c, &d, &e, &f, &n);

        printf("Case %lu: %lu\n", ++caseno, fn(n));

    }

    return 0;
}

