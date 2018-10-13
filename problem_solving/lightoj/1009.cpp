#include <bits/stdc++.h>
#define MAX 20005
using namespace std;

vector<vector<int > > adj;
int nodes[100005];
short color[MAX];
int sz, mx;

void bfs() {
	queue<int> q;

    mx = 0;
	for (int k = 0; k < sz; ++k) {
		int it = nodes[k];
		if (color[it] == -1) {
            int c0 = 0, c1 = 0;

			q.push(it);
			color[it] = 0;
			++c0;

			while (!q.empty()) {
				int u = q.front();
				q.pop();

				int usz = adj[u].size();
				for (int ii = 0; ii < usz; ++ii) {
					int v = adj[u][ii];

					if (color[v] == -1) {
						color[v] = color[u] ^ 1;
						if (color[v] == 0) ++c0;
						else ++c1;
						q.push(v);
					}
				}
			}

            mx += max(c0, c1);
		}
	}
}

int main() {
	int T;
	scanf("%d", &T);

	for (int cs = 1; cs <= T; ++cs) {
		int u, v;
		scanf("%d", &sz);

		adj.clear();
		adj.resize(MAX);
		memset(color, -1, sizeof color);

		for (int i = 0; i < sz; ++i) {
			scanf("%d %d", &u, &v);
			nodes[i] = u;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}

		bfs();

		printf("Case %d: %d\n", cs, mx);
	}
	return 0;
}

