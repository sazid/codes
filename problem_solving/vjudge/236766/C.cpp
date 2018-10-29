#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, z, cx=0, cy=0, cz=0;
    cin >> n;
    while (n--) {
        cin >> x >> y >> z;
        cx += x;
        cy += y;
        cz += z;
    }
    if (cx == 0 and cy == 0 and cz == 0) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

