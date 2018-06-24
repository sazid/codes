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

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

// double max = numer_limits<double>::max()
// double INFINITY = numeric_limits<double>::infinity();

int w, h;
int mem[55][55];
char mat[55][55];
vector<pair<int, int> > A;

inline bool up_left(int x, int y) {
    return !(x - 1 < 1 or y - 1 < 1) and mat[x-1][y-1] == mat[x][y] + 1;
}

inline bool up(int x, int y) {
    return x - 1 >= 1 and mat[x-1][y] == mat[x][y] + 1;
}

inline bool up_right(int x, int y) {
    return !(x - 1 < 1 or y + 1 > w) and mat[x-1][y+1] == mat[x][y] + 1;
}

inline bool left(int x, int y) {
    return y - 1 >= 1 and mat[x][y-1] == mat[x][y] + 1;
}

inline bool right(int x, int y) {
    return y + 1 <= w and mat[x][y+1] == mat[x][y] + 1;
}

inline bool down_left(int x, int y) {
    return !(x + 1 > h or y - 1 < 1) and mat[x+1][y-1] == mat[x][y] + 1;
}

inline bool down(int x, int y) {
    return x + 1 <= h and mat[x+1][y] == mat[x][y] + 1;
}

inline bool down_right(int x, int y) {
    return !(x + 1 > h or y + 1 > w) and mat[x+1][y+1] == mat[x][y] + 1;
}


int dfs(int x, int y) {
    if (mem[x][y]) return mem[x][y];
    int c = 0;

    if (up_left(x, y)) c = max(c, 1 + dfs(x - 1, y - 1));
    if (up(x, y)) c = max(c, 1 + dfs(x - 1, y));
    if (up_right(x, y)) c = max(c, 1 + dfs(x - 1, y + 1));

    if (left(x, y)) c = max(c, 1 + dfs(x, y - 1));
    if (right(x, y)) c = max(c, 1 + dfs(x, y + 1));

    if (down_left(x, y)) c = max(c, 1 + dfs(x + 1, y - 1));
    if (down(x, y)) c = max(c, 1 + dfs(x + 1, y));
    if (down_right(x, y)) c = max(c, 1 + dfs(x + 1, y + 1));

    mem[x][y] = c;
    if (c == 0) {
        mem[x][y] = 1;
        return 1;
    }
    return c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int H = 0, W = 0, cs = 1, count;
    while (true) {
        cin >> H >> W;
        if (H == 0 && W == 0) break;
        A.clear();
        count = 0;
        w = W, h = H;

        for (int i = 0; i < 53; i++) {
            for (int j = 0; j < 53; j++) {
                mem[i][j] = 0;
                mat[i][j] = '\0';
            }
        }

        repe(int, i, 1, H) repe(int, j, 1, W) {
            cin >> mat[i][j];
            if (mat[i][j] == 'A') A.emplace_back(i, j);
        }

        if (A.empty()) {
            cout << "Case " << cs++ << ": " << 0 << NL;
            continue;
        }

        for (auto p: A) {
            count = max(count, dfs(p.first, p.second));
        }

        cout << "Case " << cs++ << ": " << count << NL;
    }


    return 0;
}
