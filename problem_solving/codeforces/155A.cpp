#include <bits/stdc++.h>
using namespace std;

int main() {
    int mx, mn, n, c=0, x;
    cin >> n;
    n--;
    cin >> mn;
    mx = mn;
    while (n--) {
        cin >> x;
        if (x > mx) {
            c++;
            mx = x;
        }
        if (x < mn) {
            c++;
            mn = x;
        }
    }
    cout << c << endl;
    return 0;
}

