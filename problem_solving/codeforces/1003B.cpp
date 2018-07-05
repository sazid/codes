#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;
    string s;
    bool f = 1;
    int i = 0;
    while (a > 0 && b > 0 && x > 1) {
        if (f) s+="1", b--;
        else s+="0", a--;
        f=!f;
        if (i > 0 && s[i]!=s[i-1]) x--;
        i++;
    }
    while (a > 0) {
        s+="0";
        a--;
    }
    while (b > 0) {
        s+="1";
        b--;
    }
    cout << s << endl;
    return 0;
}

