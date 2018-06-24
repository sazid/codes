#include <iostream>
#include <vector>
using namespace std;
typedef unsigned long long ull;

vector<vector<pair<ull, ull > > > G(100005);
vector<bool> visited(100005);
vector<ull> D(100005);
ull max_distance, root;

// find out a leaf/root
void dfs2(ull u) {
	visited[u] = true;
	D[u] = max_distance;
	bool f = true;
	cout << "Visiting: " << u << endl;
	for (auto v : G[u]) {
		cout << v.first << endl;
		if (!visited[v.first]) {
			f = false;
			break;
		}
	}
	if (f) {
		root = u;
		return;
	}
	for (pair<ull, ull> v : G[u]) {
		if (!visited[v.first]) {
			max_distance += v.second;
			dfs2(v.first);
		}
	}
}

// calculate max distance
void dfs1(ull u) {
	visited[u] = true;
	D[u] = max_distance;
	for (pair<ull, ull> v : G[u]) {
		if (!visited[v.first]) {
			max_distance += v.second;
			dfs1(v.first);
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ull T, n, u, v, d;
	cin >> T;
	while (T--) {
		cin >> n;
		max_distance = 0;
		ull temp = 0;
		root = 0;
		for (int i = 1; i < n; i++) {
			cin >> u >> v >> d;
			G[u].emplace_back(v, d);
			G[v].emplace_back(u, d);
			temp = temp ? temp : u;
		}

		dfs2(temp);

		cout << "temp: " << temp << endl;
		visited.clear();
		cout << "root: " << root << endl;

		dfs1(root);
		for (ull i = root; i <= n; i++) {
			cout << max(D[i], max_distance-D[i]);
			if (i != n) cout << ' ';
		}
		visited.clear();
		D.clear();
		G.clear();
		cout << '\n';
	}

	return 0;
}

