#include <bits/stdc++.h>
using namespace std;

int chars[128];
int dp[2005];

bool is_prime(int n) {
    if (dp[n] != -1) return dp[n];

    if (n == 0) return false;
    if (n == 1) return false;

    dp[n] = true;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            dp[n] = false;
            break;
        }
    }
    return dp[n];
}

int main() {
    memset(dp, -1, sizeof(dp));
    int T;
    string s;
    cin >> T;
    for (int cs = 1; cs <= T; cs++) {
        cout << "Case " << cs << ": ";

        memset(chars, 0, sizeof(chars));

        cin >> s;
        int sz = s.size();
        for (int i = 0; i < sz; i++) chars[ s[i] ]++;
        bool f = true;
        for (int i = 0; i < 128; i++) {
            if (is_prime( chars[i] )) {
                cout << (char)i;
                f = false;
            }
        }
        if (f) cout << "empty";
        cout << '\n';
    }

    return 0;
}

