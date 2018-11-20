#include <bits/stdc++.h>
using namespace std;

#define point pair<int, int>
#define xx first
#define yy second

map<point, point> parent;

void make_set(point x) {
	parent[x] = x;
}

point find_set(point x) {
	if (x == parent[x])
		return x;
	return parent[x] = find_set(parent[x]);
}

void union_sets(point a, point b) {
	a = find_set(a);
	b = find_set(b);
	if (a != b) {
		if (rand() % 2)
			swap(a, b);
		parent[b] = a;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, x, y;
	point psel;
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		if (psel.xx == 0) psel = point(x, y);
		
		point cur(x, y);
		make_set(cur);
		
		for (auto &p : parent) {
			point pf = p.first;
			
			if (pf.xx == x || pf.yy == y) {
				union_sets(pf, cur);
				break;
			}
		}
	}
	
	int c = 0;
	for (auto &p : parent) {
		point pf = p.first;
		if (find_set(pf) != find_set(psel)) ++c;
	}
	
	cout << c << endl;
	
	return 0;
}
