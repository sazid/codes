#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N, Q;
	cin >> N;
	
	vector<int> v(N);
	cin >> v[0];
	for (int i = 1; i < N; ++i) {
		cin >> v[i];
		v[i] += v[i-1];
	}
	
	cin >> Q;
	while (Q--) {
		int i, j;
		cin >> i >> j;
		
		cout << v[j] - v[i-1] << '\n';
	}
	
	return 0;
}
