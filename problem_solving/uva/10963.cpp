#include <iostream>
#include <limits>
using namespace std;
typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, a, b, d, pd, w;
    cin >> T;
    while (T--) {
        cin >> w;
        
        bool f = true;
        cin >> a >> b;
        if (b > a) swap(a, b);
        d = (a-b);
        
        for (int i = 0; i < w-1; i++) {
            cin >> a >> b;
            if (b > a) swap(a, b);
            if (a-b == d) d = a-b;
            else f = false;
        }
        
        if (f) cout << "yes\n";
        else cout << "no\n";
        
        if (T) cout << '\n';
    }

    return 0;
}
