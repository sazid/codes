#include <bits/stdc++.h>
#define REP(i, a, b) for(int i = a; i < b; i++)
#define ull unsigned long long
#define ll long long

using namespace std;

ull gcd(ull a, ull b) {
    if (b % a == 0) return a;
    return gcd(b % a, a);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll T;
    cin >> T;
    while (T-- > 0) {
        ll A, B;
        cin >> A >> B;
        ull _gcd = gcd(A, B);
        ull _lcm = (A/_gcd)*B;
        if (_lcm == A*B) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }

    return 0;
}
