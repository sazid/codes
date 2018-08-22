#include <bits/stdc++.h>
using namespace std;

char cnt[128];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long n = 0;
    string s = "";

    cin >> n >> s;

    auto sz = s.size();
    for (long i = 0; i < sz; ++i) ++cnt[ s[i] ];


    bool f = false;
    for (char i : cnt) {

        if (i > 1) {
            f = true;
            break;
        }

    }


    if (f) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}