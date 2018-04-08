#include <bits/stdc++.h>
#define REP(i, a, b) for(int i = a; i < b; i++)
#define ull unsigned long long
#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    double n, m, a, i=0;
    cin >> n >> m;
    double sum = 0;
    while (n-- > 0) {
        cin >> a;
        sum += a;
    }

    double count = ceil(sum/m);
    // if (sum % n != 0) count++;
    cout << count << "\n";

    return 0;
}
