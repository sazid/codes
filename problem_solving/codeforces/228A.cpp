#include <bits/stdc++.h>
using namespace std;

map<int, int> m;

int main() {
    int x, c=0;
    for (int i = 0; i < 4; i++) cin >> x, m.insert({x, 0}), m[x]++;
    for (auto i : m) if (i.second > 1) c += i.second - 1;
    cout << c << endl;

    return 0;
}

