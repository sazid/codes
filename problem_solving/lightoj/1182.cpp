#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll count(ll n) {
	ll c = 0;
	ll r = 0;
	while (n > 0) {
		r = n % 2;
		n /= 2;
		if (r == 1) c++;
	}
	return c;
}

int main() {
	int T;
	ll n;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		scanf("%lld", &n);
		string s = count(n)&1 ? "odd" : "even";
		printf("Case %d: %s\n", i, s.c_str());
	}
	return 0;
}

