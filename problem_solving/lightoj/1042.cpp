#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;

string to_bin(ui n) {
    string s;
    s.reserve(10);

    while (n > 0) {
        s += (n % 2 + '0');
        n /= 2;
    }

    s += '0';
    return s;
}

ui to_int(string s) {
    ui n = 0;
    ui sz = s.size();

    for (ui i = sz-1; i > 0; --i) {
        n *= 2;
        n += (s[i]-'0');
    }

    return n;
}

int main() {
    cout << to_bin(6) << endl;
    cout << to_bin(7) << endl;
    cout << to_bin(8) << endl;
    cout << to_bin(10) << endl;
    cout << to_int(to_bin(10)) << endl;

    return 0;
}

