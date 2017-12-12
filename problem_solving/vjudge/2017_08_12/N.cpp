#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string::size_type ssize;

int freq[128];
int nums[10000];

void sieve_primes(ll n) {
    for (ll i = 2; i <= n; i++) {
        if (nums[i] == 0) {
            ll upto = n/i;
            for (ll k = 2; k <= upto; k++) {
                nums[k*i] = 1;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    sieve_primes(10000);
    ssize size;
    string s;
    ll T, cases=1;
    cin >> T;
    while (T-- > 0) {
        cin >> s;
        size = s.length();
        for (ssize i = 0; i < size; i++) {
            freq[s[i]]++;
        }

        cout << "Case " << cases++ << ": ";
        int c=0;
        for (ssize i = 0; i < 128; i++) {
            if (freq[i] > 1 && nums[freq[i]] == 0) {
                cout << (char) i;
                c++;
            }
            freq[i] = 0;
        }
        if (c == 0) cout << "empty";
        cout << "\n";
    }

    return 0;
}