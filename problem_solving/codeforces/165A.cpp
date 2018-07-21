#include <bits/stdc++.h>
using namespace std;

bool grid[1005][1005];
int x, y, i, j, n, c=0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (i = 0; i < n; i++) cin >> x >> y, grid[y][x] = 1;

    for (i = 1; i < 1000; i++) {
        bool r=false,l=false,u=false,d=false;
        for (j = 1; j < 1000; j++) {
            if (grid[i][j+1] == 1) r = true;
            if (grid[i][j-1] == 1) l = true;
            if (grid[i+1][j] == 1) d = true;
            if (grid[i-1][j] == 1) u = true;
        }

        if (u and d and r and l) c++;
    }

    cout << c << endl;

    return 0;
}

