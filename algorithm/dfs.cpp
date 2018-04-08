#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int> > adj;
vector<bool> visited;
vector<int> color;

vector<int> time_in, time_out;
int dfs_timer = 0;

void dfs(int u) {
    cout << u << ' ';
    visited[u] = true;
    for (int v: adj[u])
        if (!visited[v])
            dfs(v);
}

void dfs_(int u) {
//    cout << u << " ";
    time_in[u] = dfs_timer++;
    color[u] = 1;
    for (int v: adj[u]) {
        if (color[v] == 0) {
            dfs_(v);
        }
    }
    color[u] = 2;
    time_out[u] = dfs_timer++;
}

void bfs(int u) {
    queue<int> q;
    q.push(u);
    while (!q.empty()) {
        cout << u << ' ';
        visited[u] = true;
        u = q.front();
        q.pop();
        for (int v: adj[u]) {
            if (!visited[v]) {
                q.push(v);
            }
        }
    }
}

int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);

    int n, e, x, y;
    cin >> n >> e;
    visited.resize(n);
    adj.resize(n);
    while (e--) {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(0);
    cout << '\n';

    visited.clear();
    visited.resize(n);
    time_in.resize(n);
    time_out.resize(n);
    bfs(0);
    cout << '\n';

    visited.clear();
    visited.resize(n);
    time_in.resize(n);
    time_out.resize(n);
    color.resize(n);
    dfs_(0);
    for (int i = 0; i < n; i++) {
        cout << i << ": " << time_in[i] << "/" << time_out[i] << endl;
    }

    return 0;
}
