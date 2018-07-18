#include <bits/stdc++.h>
using namespace std;

int endx, endy;
int dp[100][100];

int dfs(int x, int y) {
    if (x < 0 || y > endy) return 0;
    if (x == endx and y == endy) return 1;
    if (dp[x][y] != -1) return dp[x][y];

    int p = dfs(x-1, y);
    int q = dfs(x, y+1);
    dp[x][y] = p+q;
    return dp[x][y];
}

int main() {
    memset(dp, -1, sizeof(dp));
    int startx, starty;
    cin >> startx >> starty >> endx >> endy;
    cout << dfs(startx, starty) << endl;
    return 0;
}

