#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long m, n, a;
	cin >> n >> m >> a;
	cout << (long long)(ceil(m/(double)a) * ceil(n/(double)a)) << "\n";

	return 0;
}