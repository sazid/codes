#include <bits/stdc++.h>
using namespace std;

char mat[2005][2005];
string path;
int n, k;

int fx[] = {0, 1};
int fy[] = {1, 0};

// d indicates the current distance from the root node (0,0)
// k indicates the no of changes I can still make from my current pos
int dfs(int x, int y, int d, int k) {
	if (x == n-1 and y == n-1)
		return d;
	if (x >= n or y >= n)
		return 0;
	if (k < 0)
		return 0;

	int dist[2] = {0, 0};
	char used[2] = {0, 0};
	for (int i = 0; i < 2; ++i) {
		if (mat[x+fx[i]][y+fy[i]] == 'a') {
			// no need to spend k (no changes)
			dist[i] = dfs(x+fx[i], y+fy[i], d+1, k);
			used[i] = 'a';
		}
		else {
			// spend k (decrease k by 1) and move to next pos if possible
			if (k > 0) {
				dist[i] = dfs(x+fx[i], y+fy[i], d+1, k-1);
				used[i] = 'a';
			}
			else {
				dist[i] = dfs(x+fx[i], y+fy[i], d+1, k);
				used[i] = mat[x+fx[i]][y+fy[i]];
			}
		}
	}
	
	if (dist[0] >= dist[1] and used[0] <= used[1]) {
		path += used[0];
	}
	else {
		path += used[1];
	}
	
	return max(dist[0], dist[1]);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> k;
	
	for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j)
		cin >> mat[i][j];
	
	dfs(0, 0, 0, k);
	reverse(path.begin(), path.end());
	cout << path << endl;
	
	return 0;
}
