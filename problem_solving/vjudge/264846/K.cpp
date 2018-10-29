#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

namespace sz {
	ll lcm(ll a, ll b) {
		return a*b/__gcd(a,b);
	}
	
	ll bs(ll a, ll c) {
		ll l = 2;
		ll r = a*c;
		ll mid = -1;
		
		while (l <= r) {
			mid = l + ((r-l)>>1);
			ll _lcm = lcm(a,mid);
			
			if (_lcm >= c) return mid;
			else if (_lcm > c) 
		}
		
		
		
		return mid;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin >> T;
	while (T--) {
		ll a,b,c;
		cin>>a>>c;
		
		b = sz::bs(a,c);
		
		if (b == -1) cout << "NOT POSSIBLE\n";
		else cout << b << '\n';
	}
	
	return 0;
}
