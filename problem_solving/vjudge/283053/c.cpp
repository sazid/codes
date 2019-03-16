#include <bits/stdc++.h>
using namespace std;

const int MAX = 30015;

// vector of adj {node, weight}
vector<pair<int, int> > adj[MAX];
vector<int> level;
bitset<MAX> visited;
int n;

// {node, distance}
pair<int, int> bfs(int u) {
	visited.reset();
	level.clear();
	level.reserve(MAX);

	queue<int> q;
	q.push(u);

	visited[u] = 1;
	level[u] = 0;

	int farthest_weight = 0;
	int farthest_node = u;

	while (!q.empty()) {
		u = q.front();
		q.pop();

		int sz = adj[u].size();
		for (int i = 0; i < sz; ++i) {
			int v = adj[u][i].first;
			int w = adj[u][i].second;
			if (!visited[v]) {
				q.push(v);
				visited[v] = 1;
				
				level[v] = level[u] + w;

				if (level[v] > farthest_weight) {
					farthest_node = v;
					farthest_weight = level[v];
				}
			}
		}
	}

	return make_pair(farthest_node, farthest_weight);
}

int main() {
	int T;
	scanf("%d", &T);
	int u, v, w;
	for (int cs = 1; cs <= T; ++cs) {
		scanf("%d", &n);
		for (int i = 0; i < n-1; ++i) {
			scanf("%d %d %d", &u, &v, &w);
			adj[u].push_back(make_pair(v, w));
			adj[v].push_back(make_pair(u, w));
		}

		pair<int, int> p = bfs(0);
		cout << "Farthest node: " << p.first << endl;
		p = bfs(p.first);
		cout << "Farthest node: " << p.first << endl;

		printf("Case %d: %d\n", cs, p.second);
	}

	return 0;
}

