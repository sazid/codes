// UNSOLVED

#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[50005];
long long tree[50005*4 + 10	];

int max3(int a, int b, int c) {
	return max(a, max(b, c));
}

void build(int node, int b, int e) {
	if (b == e) {
		tree[node] = arr[b];
		return;
	}
	
	int left = node << 1;
	int right = node << 1 | 1;
	int mid = (b + e) >> 1;
	
	build(left, b, mid);
	build(right, mid+1, e);
	tree[node] = max3(tree[left], tree[right], tree[left] + tree[right]);
}

int query(int node, int b, int e, int l, int r) {
	if (b > r || e < l) return INT_MIN;
	
	if (b >= l && e <= r) return tree[node];
	
	int left = node << 1;
	int right = node << 1 | 1;
	int mid = (b + e) >> 1;
	int p1 = query(left, b, mid, l, r);
	int p2 = query(right, mid+1, e, l, r);
	return max(p1, p2);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> arr[i];
	
	build(1, 1, n);
	
	cin >> m;
	int x, y;
	for (int i = 1; i <= m; ++i) {
		cin >> x >> y;
		cout << query(1, 1, n, x, y) << '\n';
	}
	
	return 0;
}
