// C - The weird staircase
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)
using namespace std;

void f(int i, int jump, int &min_jumps, vector<int> &x, vector<bool> &visited) {
    if (i == x.size()) {
        if (min_jumps == -1) min_jumps = jump;
        else min_jumps = min(min_jumps, jump);
        return;
    }

    if (i < 0 || i > x.size() || visited[i])
        return;

    visited[i] = true;
    
    f(i+x[i], jump+1, min_jumps, x, visited);
    f(i+1, jump+1, min_jumps, x, visited);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned int T;
    unsigned int n;
    cin >> T;
    while (T-- > 0) {
        cin >> n;
        vector<int> x(n);
        vector<bool> visited(n);
        int min_jumps = -1;
        REP(i, 0, n) {
            cin >> x[i];
        }
        f(0, 0, min_jumps, x, visited);

        cout << min_jumps << "\n";
    }
    return 0;
}