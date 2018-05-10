#include <bits/stdc++.h>

using namespace std;

typedef unsigned long ul;

int visited[100010] = {0}, cats[100010] = {0};
vector<vector<int> > adj;
ul n, m, s = 0;

void dfs(ul u, ul c = 0) {
    visited[u] = 1;
    c = !cats[u] ? 0 : c + cats[u];
    if (c > m) return;

    bool f = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            f = false;
            break;
        }
    }
    if (f) s++;

    for (auto &v: adj[u]) {
        if (!visited[v])
            dfs(v, c);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ul x, y;
    cin >> n >> m;
    adj.resize(n+1);

    for (ul i = 1; i <= n; i++) {
        cin >> cats[i];
    }

    for (ul i = 1; i <= n-1; i++) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1);
    cout << s << endl;

    return 0;
}
