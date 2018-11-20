#include <bits/stdc++.h>
using namespace std;

int parent[1000];

void make_set(int v) {
	parent[v] = v;
}

int find_set(int v) {
	if (v == parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
	a = find(a);
	b = find(b);
	if (a != b) {
		if (rand() % 2)
			swap(a, b);
		parent[b] = a;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	return 0;
}
