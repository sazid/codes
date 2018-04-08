#include <bits/stdc++.h>
#define REP(i, a, b) for(int i = a; i < b; i++)
#define ull unsigned long long
#define ll long long
#define SIZE 1000000010

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<ull> vec;
    ull size = 0;
    ll x;

    ll T;
    cin >> T;
    while (T-- > 0) {
        cin >> x;
        for (ull i = 0; i < x; i++) {
            ull a;
            cin >> a;
            if (size == 0) {
                vec.push_back(a);
            } else {
                while (vec[size-1] <= a) {
                    vec.pop_back();
                }
                vec.push_back(a);
            }
            size++;
        }
        cout << size << "\n";
        size = 0;
    }

    return 0;
}
