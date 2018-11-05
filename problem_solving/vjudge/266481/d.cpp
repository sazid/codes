#include <bits/stdc++.h>
using namespace std;
#define NAX 10005

int k, n, m, cnt;

vector<int> adj[NAX];
int persons[NAX];
bitset<NAX> visited;
vector<int> parent[NAX];

void _clear()
{
	cnt = 0;
	for (int i = 0; i < NAX; ++i)
	{
		adj[i].clear();
		parent[i].clear();
		visited[i] = 0;
		persons[i] = 0;
	}
}

void dfs(int u, int from)
{
	if (visited[u]) return;
	
	//~ printf("Visiting u: %d, from: %d\n", u, from);
	visited[u] = 1;
	parent[u].push_back(from);
	
	size_t sz = adj[u].size();
	for (size_t i = 0; i < sz; ++i)
		dfs(adj[u][i], from);
}

int main()
{
	int T;
	scanf("%d", &T);
	
	for (int cs = 1; cs <= T; ++cs)
	{
		_clear();
		scanf("%d %d %d", &k, &n, &m);
		
		int x;
		for (int i = 0; i < k; ++i)
			scanf("%d", &persons[i]);
		
		int u, v;
		for (int i = 0; i < m; ++i)
		{
			scanf("%d %d", &u, &v);
			adj[u].push_back(v);
		}
		
		for (int i = 0; i < k; ++i)
		{
			dfs(persons[i], persons[i]);
			visited.reset();
		}
		
		for (int i = 0; i < NAX; ++i)
			if (parent[i].size() == k)
				++cnt;
		
		printf("Case %d: %d\n", cs, cnt);
	}
	
	return 0;
}
