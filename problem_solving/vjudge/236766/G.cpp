#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x[100005], l=1, r=1;
    cin >> n;

    if (n == 1) {
        cout << "yes\n1 1\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        cin >> x[i++];
    }

    for (int i = 1; i <= n; i++) {
        if (x[i] >= x[i+1]) {
            l = i;
            break;
        }
    }

    for (r = l; r <= n; r++) {
        if (x[r+1] >= x[r]) {
            cout << r << endl;
            break;
        }
    }
    
    cout << l << " " << r << endl;

    return 0;
}

