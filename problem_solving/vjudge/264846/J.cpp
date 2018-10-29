#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll find_(ll n) {
	double r;
	
	for (ll i = 2; i*i <= n; ++i) {
		r = log(n)/log(i);
		if (ceil(r) - floor(r) == 0) {
			return (ll) r;
		}
	}
	
	return 1;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll n;
	while (cin >> n and n) {
		cout << find_(n < 0 ? (-1)*n : n) << '\n';
	}
	
	return 0;
}
