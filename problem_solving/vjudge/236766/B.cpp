#include <bits/stdc++.h>
using namespace std;

char l(char c) {
    if (c >= 'A' and c <= 'Z') return c+32;
    return c;
}

int main() {
    string a, b;
    cin >> a >> b;
    auto sz = a.size();
    for (int i = 0; i < sz; i++) {
        if (l(a[i]) > l(b[i])) {
            cout << 1 << endl;
            return 0;
        } else if (l(a[i]) < l(b[i])) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}

