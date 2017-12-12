#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, a, b, i=1;
	cin >> T;
	while(T--) {
		cin >> a >> b;
		cout << "Case " << i << ": " << a + b << "\n";
		i++;
	}

	return 0;
}