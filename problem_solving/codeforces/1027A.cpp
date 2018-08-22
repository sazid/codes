#include <bits/stdc++.h>
using namespace std;

int n;
string s, p;

bool is_palindrome(string &s) {
    int sz = n/2;
    for (int i = 0, j = n-1; i < sz; ++i, --j) {
        if (s[i] != s[j]) return false;
    }
    return true;
}

bool f(string p, int i) {
    if (p.size() == n)
        if (is_palindrome(p)) return true;
        else return false;

    char prev = s[i] == 'a' ? 'b' : s[i]-1;
    char next = s[i] == 'z' ? 'y' : s[i]+1;

    bool f1 = f(p+prev, i+1);
    if (f1) return true;

    bool f2 = f(p+next, i+1);
    if (f2) return true;

    return f1 || f2;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {

        cin >> n >> s;

        if (f("", 0)) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}

