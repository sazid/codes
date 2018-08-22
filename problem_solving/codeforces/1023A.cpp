#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    size_t sz, tz;
    string s, t;

    cin >> sz >> tz >> s >> t;

    size_t i, j, pos_of_star, previous_pos = 0;
    bool match_left = true,
         match_right = true;

    pos_of_star = s.find('*');

    if (pos_of_star == string::npos)
        if (s == t) {
            cout << "YES\n";
            return 0;
        } else {
            cout << "NO\n";
            return 0;
        }

    for (i = 0; i < pos_of_star; ++i) {
        if (s[i] != t[i]) {
            match_left = false;
            break;
        }
        previous_pos = i;
    }

    for (i = tz-1, j = sz-1; j > pos_of_star; --i, --j) {
        if (s[j] != t[i] or i <= previous_pos) {
            match_right = false;
            break;
        }
    }

    if (match_left and match_right)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

