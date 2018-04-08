#include <bits/stdc++.h>

#define rep(T, i, a, b) for (T (i)=(a); (i) < (b); (i)++)
#define repe(T, i, a, b) for (T (i)=(a); (i) <= (b); (i)++)
#define MOD(n, M) ((((n) % (M)) + (M)) % (M))
#define PB push_back
#define F first
#define S second
#define PI acos(-1)
#define PRNT(arr) for (auto i : (arr)) cout << i << " "; cout << endl;
#define eps 1e-11
#define len(x) x.size()
#define FIN freopen("input.txt", "r", stdin);
#define FOUT freopen("output.txt", "w", stdout);
#define NL "\n"

#define MAX 25

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

// double max = numer_limits<double>::max()
// double INFINITY = numeric_limits<double>::infinity();

int W, H, c;
char mat[MAX][MAX];
int visited[MAX][MAX];

bool left(int x, int y) {
    return !((y - 1 < 0) or (mat[x][y - 1] == '#'));
}

bool right(int x, int y) {
    return !((y + 1 >= W) or (mat[x][y + 1] == '#'));
}

bool up(int x, int y) {
    return !((x - 1 < 0) or (mat[x-1][y] == '#'));
}

bool down(int x, int y) {
    return !((x + 1 >= H) or (mat[x+1][y] == '#'));
}

void clear() {
    rep(int, i, 0, MAX) rep(int, j, 0, MAX) {
        mat[i][j] = 0;
        visited[i][j] = 0;
    }
}

void dfs(int x, int y) {
    if (visited[x][y]) return;

    visited[x][y] = 1;
    c++;
    if (up(x, y)) dfs(x-1, y);
    if (down(x, y)) dfs(x+1, y);
    if (left(x, y)) dfs(x, y-1);
    if (right(x, y)) dfs(x, y+1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T, w=0, h=0, a = 0, b = 0, cs=1;
//    char c;
    cin >> T;

    while (T--) {
        clear();
        cin >> w >> h;
        W = w, H = h;
        rep(int, i, 0, h) rep(int, j, 0, w) {
            cin >> mat[i][j];
            if (mat[i][j] == '@') {
                a = i;
                b = j;
            }
        }
        c=0;
        dfs(a, b);
        cout << "Case " << cs++ << ": " << c << NL;
    }


    return 0;
}
