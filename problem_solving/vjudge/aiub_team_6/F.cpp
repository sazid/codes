#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string a, b, s;
    cin >> n >> a >> b;

    for (int i = 0; i < n; i++) {
        if (a[i] == 'R' and b[i] == 'R') s += 'P';
        if (a[i] == 'P' and b[i] == 'P') s += 'S';
        if (a[i] == 'S' and b[i] == 'S') s += 'R';

        if (a[i] == 'R' and b[i] == 'S') s += 'R';
        if (a[i] == 'P' and b[i] == 'S') s += 'S';

        if (a[i] == 'P' and b[i] == 'R') s += 'P';
        if (a[i] == 'S' and b[i] == 'R') s += 'R';

        if (a[i] == 'S' and b[i] == 'P') s += 'S';
        if (a[i] == 'R' and b[i] == 'P') s += 'P';
    }
    cout << s << endl;

    return 0;
}

