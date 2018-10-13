#include <bits/stdc++.h>
using namespace std;

char adj[25][25];
bool visited[25][25];
int W, H;
int c;

void dfs(int x, int y) {
    if (visited[x][y]) return;

    if (x < 0 || y < 0) return;
    if (x >= H || y >= W) return;
    if (adj[x][y] == '#') return;

    visited[x][y] = 1;
    ++c;
    
    dfs(x-1, y);
    dfs(x+1, y);
    dfs(x, y-1);
    dfs(x, y+1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    for (int cs = 1; cs <= T; ++cs) {
        cin >> W >> H;

        c = 0;
        memset(visited, 0, sizeof visited);

        int x, y;
        for (int row = 0; row < H; ++row) {
            for (int col = 0; col < W; ++col) {
                cin >> adj[row][col];

                if (adj[row][col] == '@') {
                    x = row;
                    y = col;
                }
            }
        }

        dfs(x, y);

        cout << "Case " << cs << ": " << c << '\n';
    }

    return 0;
}

