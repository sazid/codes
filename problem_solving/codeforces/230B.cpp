#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

bool status[1100000];
set<ull> t_primes;

void sieve() {
    ull N = 1000005;
    ull sq = static_cast<ull>(sqrt(N));

    t_primes.insert(4);

    for (ull i = 4; i <= N; i += 2) status[i] = true;
    for (ull i = 3; i <= N; i += 2) {
        if (status[i] == 0) {
            t_primes.insert(i*i);
            for (ull j = i * i; j <= N; j += i) status[j] = true;
        }
    }
    status[1] = false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    ull T, x;
    cin >> T;
    while (T--) {
        cin >> x;
        if (t_primes.find(x) == t_primes.end()) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}

