#include <bits/stdc++.h>
#define REP(i, a, b) for(int i = a; i < b; i++)
#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n, m, a, i=0;
    cin >> n >> m;
    ull sum = 0;
    while (n-- > 0) {
        cin >> a;
        sum += a;
    }

    ull count = floor(sum/n);
    if (sum % n != 0) count++;
    cout << count << "\n";

    return 0;
}
