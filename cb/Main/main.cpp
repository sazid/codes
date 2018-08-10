#include <bits/stdc++.h>
using namespace std;

int x[500005];
int y[1000005];

int main() {
    unordered_map<int,int> m;
    m[1];
    m[59];
    m[5];
    m[7];
    m[2333];
    m[533];
    cout << m.size() << endl;

    for (auto i: m) {
        cout << i.first << ' ' << i.second << endl;
    }

    return 0;
}
