#include <bits/stdc++.h>
using namespace std;

map<string, vector<string > > m;
map<string, bool> visited;

long dfs(string u) {
    visited[u] = 1;
    long c = 1;
    for (string v : m[u])
        if (!visited[v])
            c += dfs(v);
    return c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        while (n--) {
            visited.clear();
            string a, b;
            cin >> a >> b;
            m.insert({a, vector<string>()});
            m[a].push_back(b);
            m[b].push_back(a);

            cout << dfs(a) << endl;;

        }
    }
    
    return 0;
}

