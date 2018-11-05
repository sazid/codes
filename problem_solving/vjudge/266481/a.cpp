#include <bits/stdc++.h>
using namespace std;
#define NAX 1005

int cost[NAX];
vector<int> adj[NAX];
bitset<NAX> visited;
int n, m;
int sum, no_of_nodes;

void dfs(int u)
{
	sum += cost[u];
	++no_of_nodes;
	visited[u] = 1;
	
	size_t sz = adj[u].size();
	for (size_t i = 0; i < sz; ++i)
		if (!visited[adj[u][i]])
			dfs(adj[u][i]);
}

void _clear()
{
	for (int i = 0; i < NAX; ++i)
	{
		cost[i] = 0;
		visited[i] = 0;
		adj[i].clear();
	}
}

int main()
{
	int T, u, v;
	scanf("%d", &T);
	for (int cs = 1; cs <= T; ++cs)
	{
		_clear();
		scanf("%d %d", &n, &m);
		
		int total = 0;
		for (int node = 1; node <= n; ++node)
		{
			scanf("%d", &cost[node]);
			total += cost[node];
		}
		int avg = total / n;
		
		for (int i = 0; i < m; ++i)
		{
			scanf("%d %d", &u, &v);
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		
		bool f = true;
		// run dfs from every node to visit any disconnected graph
		for (int node = 1; node <= n; ++node)
		{
			if (!visited[node])
			{
				sum = 0;
				no_of_nodes = 0;
				dfs(node);
				
				if (sum % no_of_nodes != 0)
				{
					f = false;
					break;
				}
				else if (avg != sum / no_of_nodes)
				{
					f = false;
					break;
				}
			}
		}
		
		printf("Case %d: ", cs);
		f ? puts("Yes") : puts("No");
	}
	
	return 0;
}
