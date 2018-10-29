#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

//template<class T>
ll lcm(ll a, ll b) {
	return a*b/__gcd(a, b);
}

ll last_nonzero(ll n) {
	while (n > 0) {
		if (n % 10 != 0) return n % 10;
		n /= 10;
	}
	
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	for (int i = 1; i <= 40; ++i) {
		ll res = 1;
		
		for (int j = 1; j <= i; ++j) {
			res = lcm(res, j);
		}
		
		cout << i << " " << last_nonzero(res) << "\t" << res << "\t" << endl;
	}
	
	return 0;
}
