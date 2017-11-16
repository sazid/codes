#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

ll val[128] = {};
char valr[27] = {'\0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

void fill() {
    ll j = 1;
    for (char i = 'A'; i <= 'Z'; i++, j++) {
        val[i] = j;
    }
}

ll convert(string s) {
    ll number = 0;
    for (ll i = 0; i < s.size(); i++) {
        number = number * 26 + val[s[i]];
    }
    return number;
}

string convertr(ll n) {
    string s;
    while (n > 0) {
        if (n % 26 != 0) {
            s += valr[n % 26];
        }
        n /= 26;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    fill();

    ll T;
    cin >> T;
    while (T-- > 0) {
        string s;
        cin >> s;

        if (isalpha(s[1])) {
            // BC23
            ll i;
            for (i = 0; i < s.size(); i++) {
                if (!isalpha(s[i])) {
                    break;
                }
            }
            cout << "R" << stoi(s.substr(i, s.size())) << "C" << convert(s.substr(0, i)) << "\n";
        } else {
            // R23C55
            ll i;
            bool alpha_found = false;
            for (i = 1; i < s.size(); i++) {
                if (isalpha(s[i])) {
                    alpha_found = true;
                    break;
                }
            }
            if (!alpha_found) {
                for (i = 0; i < s.size(); i++) {
                    if (!isalpha(s[i])) {
                        break;
                    }
                }
                cout << "R" << stoi(s.substr(i, s.size())) << "C" << convert(s.substr(0, i)) << "\n";
            } else {
                cout << convertr(stoll(s.substr(i+1, s.size()))) << s.substr(1, i-1) << "\n";
            }
        }
    }

    return 0;
}
