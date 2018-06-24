#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long ull;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ull T, i, x, K, N, s, c;
    vector<ull> v;
    v.reserve(100010);

    cin >> T;
    while (T--) {
        s = 0;
        c = 0;
        v.clear();
        v.push_back(0);
        cin >> N >> K;
        while (N--) {
            cin >> x;
            v.push_back(x);
            s += x;
        }

        ull sz = v.size();
        for (ull p = 1; p < sz; p++) {
            if (v[p] + K > s - v[p]) c++;
        }
        cout << c << '\n';
    }

    return 0;
}
