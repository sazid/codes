#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll POW(ll n, ll p) {
	if (p == 0) return 1;
	if (p & 1) {
		ll r = POW(n, p/2);
		return n*r*r;
	} else {
		ll r = POW(n, p/2);
		return r*r;
	}
}

bool check_prime(ll p) {
	ll a = 1;
	while (++a)	if (__gcd(p, a) == 1) break;

	if (POW(a, p-1) % p == 1) return true;
	else return false;
}

int main() {
	cout << "Fermat's little theorem\n";

	while (true) {
		cout << "Enter n: ";
		ll n;
		cin >> n;

		cout << (check_prime(n) ? "PROBABLY PRIME\n" : "COMPOSITE\n");
	}

	return 0;
}

