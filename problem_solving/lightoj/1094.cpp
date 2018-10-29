#include <bits/stdc++.h>

#define rep(i, a, b) for ((i)=(a); (i) < (b); (i)++)
#define reps(i, a, b, s) for ((i)=(a); (i) < (b); (i)+=(s))
#define repe(i, a, b) for ((i)=(a); (i) <= (b); (i)++)
#define mod(n, M) ((((n) % (M)) + (M)) % (M))
#define pb push_back
#define MP make_pair
#define ff first
#define ss second
#define PI acos(-1)
#define prnt(arr) for (auto i : (arr)) cout << i << " "; cout << endl;
#define eps 1e-11
#define len(x) x.size()
#define FIN freopen("input.txt", "r", stdin);
#define FOUT freopen("output.txt", "w", stdout);
#define nl "\n"
#define all(x) x.begin(), (x).end()
#define FASTIO ios::sync_with_stdio(0); cin.tie(0);
#define READINT(x) scanf("%d", &(x))

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

#define MAX 30005

//double max = numeric_limits<double>::max();
//double INF = numeric_limits<double>::infinity();

struct node {
    int n, w;
    node(int n, int w) : n(n), w(w) {}
};

vector<node> adj[MAX];
bool visited[MAX];
int max_distance;
int max_node;
int n;

void dfs(int u, int dist) {
    if (visited[u]) return;

    visited[u] = true;

    if (dist >= max_distance) {
        max_distance = dist;
        max_node = u;
    }

    int sz = adj[u].size(), i;
    rep(i, 0, sz) {
        node v = adj[u][i];
        dfs(v.n, dist + v.w);
    }
}

void clear() {
    int i;
    rep(i, 0, MAX) {
        adj[i].clear();
        visited[i] = 0;
    }

    max_distance = 0;
    max_node = -1;
}

int main() {
//    FASTIO
//    FIN

    int T, cs, i;
    READINT(T);
    repe(cs, 1, T) {
        clear();
        READINT(n);

        rep(i, 0, n-1) {
            int u, v, w;
            scanf("%d %d %d", &u, &v, &w);
            adj[u].push_back(node(v, w));
            adj[v].push_back(node(u, w));
        }

        dfs(0, 0);

        max_distance = 0;
        memset(visited, 0, sizeof(visited));
        dfs(max_node, 0);

        printf("Case %d: %d\n", cs, max_distance);
    }

    return 0;
}

