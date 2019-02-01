// UNSOLVED

#include <bits/stdc++.h>
using namespace std;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	string x, y;
	
	int cnt[500015];
	while (t--) {
		cin >> x >> y;		
		memset(cnt, 0, sizeof(cnt));
		
		int start = 0;
		int sz = (int) x.size();
		for (int i = 0; i < sz; ++i) {
			
		}
		
		int ans = INT_MAX;
		for (auto p : cnt) ans = min(ans, p->second);
		
		cout << ans << '\n';
	}
	
	return 0;
}
