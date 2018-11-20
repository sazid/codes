#include <bits/stdc++.h>
using namespace std;

map<string, string> parent;
map<string, string> latest;
vector<string> Bs;
int c = 0;

void make_set(string v) {
	parent[v] = v;
}

string find_set(string v) {
	if (v == parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}

void union_sets(string a, string b) {
	a = find_set(a);
	b = find_set(b);
	if (a != b) {
		//~ if (rand() % 2)
			//~ swap(a, b);
		parent[b] = a;
		latest[a] = b;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int q;
	cin >> q;
	
	string a, b;
	for (int i = 0; i < q; ++i) {
		cin >> a >> b;
		
		// if a and/or b does not belong to any set, create a new set
		if (parent.find(a) == parent.end())
			make_set(a);

		if (parent.find(b) == parent.end())
			make_set(b);

		union_sets(a, b);
	}
	
	cout << latest.size() << '\n';
	for (auto it = latest.begin(); it != latest.end(); ++it) {
		cout << it->first << ' ' << it->second << '\n';
	}
		
	return 0;
}
