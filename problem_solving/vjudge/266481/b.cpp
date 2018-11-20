#include <bits/stdc++.h>
#define mp make_pair
#define xx first
#define yy second
#define pii pair<int, int>
#define vis(u) visited[u.xx][u.yy]
#define lev(u) level[u.xx][u.yy]
#define check(p) if ( (p.xx >= 0 && p.xx < m) && (p.yy >= 0 && p.yy < n) && !vis(p) )
#define rep(i, a, b) for (int i = 0; i < a; ++i)

using namespace std;

int dx[] = {+1, +1, +2, +2, -1, -1, -2, -2};
int dy[] = {+2, -2, +1, -1, +2, -2, +1, -1};
int grid[11][11];
int n, m;
int reached, cnt;
int level[11][11];
bool visited[11][11];

void bfs(pii u) {
	rep(i, 0, 11) {
		rep(j, 0, 11) {
			level[i][j] = 0;
			visited[i][j] = 0;
		}
	}
	queue<pii> q;
	q.push(u);
	vis(u) = 1;
	lev(u) = 0;
	while (!q.empty()) {
		u = q.front(); q.pop();
		int k = grid[u.xx][u.yy];
		
		if (k != 0) {
			if (lev(u) > 0) {
				if (lev(u) >= k) reached += (int)( ceil((double)(lev(u))/(double)(k)) );
				else ++reached;
			}
			++cnt;
		}
		
		rep(i, 0, 8) {
			pii v = mp(u.xx + dx[i], u.yy + dy[i]);
			check(v) {
				lev(v) = lev(u) + 1;
				vis(v) = 1;
				q.push(v);
			}
		}
	}
}

int main() {
	int T;
	cin >> T;
	rep(cs, 1, T+1) {
		cin >> m >> n;
		int no_of_pieces = 0;
		char c;
		rep(row, 0, m) rep(col, 0, n {
			cin >> c;
			if (c != '.') {
				++no_of_pieces;
				grid[row][col] = c-'0';
			} else
				grid[row][col] = 0;
		}
		int ans = INT_MAX;
		rep(i, 0, m) {
			rep(j, 0, n) {
				cnt = 0, reached = 0;
				bfs(mp(i, j));
				if (cnt == no_of_pieces)
					ans = min(ans, reached);				
			}
		}
		if (ans == INT_MAX) ans = -1;
		cout << "Case " << cs << ": " << ans << '\n';
	}
	return 0;
}
