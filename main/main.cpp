#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

vector<pair<ull,ull>> vec;
set<ull> s;

void fact(ull n) {
    ull sq = static_cast<ull>(sqrt(n));

    for (ull i = 2; i <= sq; ++i) {
        if (n % i == 0) {
            s.insert(i);
            s.insert(n / i);
        }
    }

    s.insert(n);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull n, x, y;
    cin >> n;

    for (ull i = 0; i < n; ++i) {
        cin >> x >> y;
        vec.emplace_back(x, y);
    }

    fact(vec[0].first);
    fact(vec[0].second);

    bool f = true;
    for (ull i = 1; i < n; ++i) {

        bool xyz = false;

        for (auto k : s) {
            ull r1 = vec[i].first % k;
            ull r2 = vec[i].second % k;

            if (!r1 or !r2) {
                xyz = true;
                break;
            }
        }

        if (!xyz) {
            f = false;
            break;
        }

    }

//     cout << *s.begin() << "\n";
    if (!f) cout << "-1\n";

    return 0;
}
