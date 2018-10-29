#include <bits/stdc++.h>
using namespace std;

const int NAX = 505;
bool arr[NAX];

bool is_prime(int n) {
	if (n == 0 || n == 1) return false;
	for (int i = 2; i*i <= n; ++i) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	int n;
	cin >> n;
	
	for (int kase = 1; kase <= n; ++kase) {
		int L, R;
		cin >> L >> R;
		
		int ans = 0;
		
		for (int i = L; i <= R; ++i) {
			if (is_prime(i)) ++ans;
		}
		
		cout << "Case " << kase << ": There are " << ans << " numbers between " << L << " and " << R << ".\n";
	}
	
	return 0;
}
