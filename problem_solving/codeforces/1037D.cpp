// http://codeforces.com/problemset/problem/1037/D
#include <bits/stdc++.h>

std::set<int> adj[200005];
bool visited[200005];
int trav[200005];
int n, curr = 0;

bool bfs(int u)
{
	visited[u] = true;
	std::queue<int> q;
	q.push(u);
	
	if (trav[curr++] != 1) return false;
	
	while (!q.empty())
	{
		u = q.front();
		q.pop();
		
		size_t sz = adj[u].size();
		
		// loop through *only* the adjacent nodes
		while (sz-- and curr < n)
		{
			int current_node = trav[curr];
			auto it = adj[u].find(current_node);
			if (it != adj[u].end() and !visited[*it])
			{
				visited[*it] = true;
				q.push(*it);
				++curr;
			}
		}
	}
	
	return curr == n;
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	std::cin >> n;

	for (int i = 0; i < n-1; ++i)
	{
		int u, v;
		std::cin >> u >> v;
		
		adj[u].insert(v);
		adj[v].insert(u);
	}
	
	for (int i = 0; i < n; ++i) std::cin >> trav[i];
	
	if (bfs(1)) std::cout << "Yes\n";
	else std::cout << "No\n";
	
	return 0;
}
