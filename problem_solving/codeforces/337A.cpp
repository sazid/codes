#include <bits/stdc++.h>
using namespace std;

int arr[55];
int n, m;

int r(int x, int y, vector<int> v) {
	if (x >= n) {
		sort(v.begin(), v.end());
		return *(v.end()-1) - v[0];
	}
	if (y >= m) return INT_MAX;

	int p1 = r(x, y+1, v);

	v.push_back(arr[y]);
	int p2 = r(x+1, y+1, v);

	if (p1 > p2) v.pop_back();

	return min(p1,p2);
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) cin >> arr[i];
	vector<int> v;
	cout << r(0, 0, v) << endl;

	return 0;
}
