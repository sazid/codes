#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c=0;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        auto sz = s.size();
        for (int i = 0; i < sz; i++) {
            if (s[i] == '+') {
                c++;
                break;
            } else if (s[i] == '-') {
                c--;
                break;
            }
        }
    }
    cout << c << endl;
    return 0;
}

