#include <bits/stdc++.h>
#define N 1000005
using namespace std;

typedef unsigned long long ull;

int nums[N];

void sieve() {
    nums[0] = 0;

    for (ull i = 1; i < N; i++) nums[i] = 1;

    for (ull i = 2; i < N; i++) {
        nums[i]++;
        for (ull j = i+i; j < N; j += i) {
            nums[j]++;
        }
    }
}

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0);

    sieve();

    ull T, x;
    cin >> T;
    while (T--) {
        cin >> x;
        if (x > 1000005) cout << "NO\n";
        else cout << (nums[x] == 3 ? "YES\n" : "NO\n");
    }

    return 0;
}

