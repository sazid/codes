#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	for (int kase = 1; kase <= t; ++kase) {
		int n;
		cin >> n;
		
		int ans = -1;
		
		int i;
		for (i = 1; i <= n; ++i) {
			//~ cout << n-5*i << endl;
			if (n-5*i > 0 and (n-5*i) % 3 == 0) {
				ans = n-5*i;
				break;
			}
		}
		
		cout << "Case " << kase << ": " << ans << '\n';
	}
	
	return 0;
}
