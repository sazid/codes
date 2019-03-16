#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

const int NAX = 100;
vector<pii> adj[NAX];
bool visited[NAX];
int d[NAX];

void dfs(int u) {
    cout << "Visiting " << u << endl;
    visited[u] = true;

    for (int i = 0; i < adj[u].size(); ++i) {
        int v = adj[u][i].first;
        int c = adj[u][i].second;

        if (!visited[v]) {
            d[v] = d[u] + c;
            dfs(v);
        } else if (d[u] + c < d[v]) {
            d[v] = d[u] + c;
            dfs(v);
        }
    }
}

int main() {
    memset(visited, 0, sizeof(visited));
    memset(d, 0, sizeof(d));

    // nodes, edges
    int n, e;
    // node, node, cost
    int u, v, c;
    cin >> n >> e;

    for (int i = 0; i < e; ++i) {
        cin >> u >> v >> c;
        adj[u].push_back(make_pair(v, c));
        adj[v].push_back(make_pair(u, c));
    }

    dfs(1);

    for (int i = 1; i <= n; ++i) {
        cout << i << ": " << d[i] << endl;
    }

    return 0;
}

/* input
6 7
1 2 2
1 4 2
2 5 2
2 3 3
3 6 5
5 6 1
4 6 1
*/

