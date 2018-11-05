#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define xx first
#define yy second

#define check(x, y) if ( ((x) >= 0 && (x) < m) && ((y) >= 0 && (y) < n) && !visited[(x)][(y)] )

typedef pair<int, int> pii;

int dx[] = {+1, +1, +2, +2, -1, -1, -2, -2};
int dy[] = {+2, -2, +1, -1, +2, -2, +1, -1};

int grid[12][12];
int n, m;
int reached, cnt;

int level[105][105];
bool visited[105][105];

void _clear() {
	m = 0, n = 0;
	//~ reached = 0, cnt = 0;
	memset(grid, 0, sizeof(grid));
	//memset(visited, 0, sizeof(visited));
	//memset(level, 0, sizeof(level));
}

void print_grid() {
	for (int row = 0; row < m; ++row) {
		for (int col = 0; col < n; ++col) {
			cout << grid[row][col];
		}
		cout << '\n';
	}
}

void bfs(pii u, pii target) {
	memset(visited, 0, sizeof(visited));
	memset(level, 0, sizeof(level));
	//reached = 0, cnt = 0;
	
	queue<pii> q;
	
	q.push(u);
	visited[u.xx][u.yy] = 1;
	level[u.xx][u.yy] = 0;
	int k = grid[u.xx][u.yy];
	
	cerr << "K: " << k << endl;
	
	while (!q.empty()) {
		
		u = q.front(); q.pop();
		
		for (int i = 0; i < 8; ++i) {
			
			pii v = mp(u.xx + dx[i], u.yy + dy[i]);
			
			check(v.xx, v.yy) {
				visited[v.xx][v.yy] = 1;
				level[v.xx][v.yy] = level[u.xx][u.yy] + 1;
				
				cerr << "From " << u.xx << ' ' << u.yy << endl;
				cerr << "Reached piece: " << v.xx << ' ' << v.yy << endl;
				cerr << "Level: " << level[v.xx][v.yy] << endl;
				
				// if target cannot be reached within k steps
				if (level[v.xx][v.yy] > k) {
					return;
				}
				// if target is reached within k steps, add it to reached, increase counter
				else if (level[v.xx][v.yy] <= k && v.xx == target.xx && v.yy == target.yy) {
					reached += level[v.xx][v.yy];
					++cnt;
					//~ cerr << "Target reached" << endl;
					return;
				}
				// else continue bfs
				else {
					q.push(v);
				}
			}
			
		}
		
	}
}

int main() {
	freopen("in", "r", stdin);
	
	int T;
	cin >> T;
	
	for (int cs = 1; cs <= T; ++cs) {
		_clear();
		
		cin >> m >> n;
		
		int no_of_pieces = 0;
		char c;
		
		vector<pii> targets;
		
		for (int row = 0; row < m; ++row) {
			for (int col = 0; col < n; ++col) {
				cin >> c;
				
				if (c != '.') {
					++no_of_pieces;
					targets.push_back(mp(row, col));
					
					grid[row][col] = c-'0';
				} else {
					grid[row][col] = 0;
				}
			}
		}
		
		print_grid();
		cerr << "Number of pieces: " << no_of_pieces << endl;
		//~ cerr << "Target node: " << target.xx << ' ' << target.yy << endl;

		int ans = -1;
		size_t sz = targets.size();
		for (size_t i = 0; i < sz; ++i) {
			pii target = targets[i];
			cerr << "--- TARGET: " << target.xx << ' ' << target.yy << " ---\n";
			
			cnt = 0, reached = 0;
			for (int row = 0; row < m; ++row) {						
				for (int col = 0; col < n; ++col) {
					if (grid[row][col] != 0 && row != target.xx && col != target.yy)
						bfs(mp(row, col), target);
				}
			}
			
			//~ cout << "No of pieces: " << no_of_pieces << endl;
			cout << "Count: " << cnt << endl;
			if (cnt == no_of_pieces - 1) {
				ans = reached;
				break;
			}
		}
		
		//~ cout << cnt << endl;
		//~ if (cnt == no_of_pieces-1) ans = reached;
		
		cout << "Case " << cs << ": " << ans << '\n';
	}
	
	return 0;
}
