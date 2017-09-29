#include <bits/stdc++.h>
#define REP(a, b) for (ll i = a; i < b; i++)
using namespace std;

typedef long long ll;

ll _pow(ll n, ll idx, ll m) {
	if (!idx) return 1;
	if (idx & 1) {
		ll r = _pow(n, idx-1, m);
		return ((n%m) * (r%m)) % m;
	} else {
		ll r = _pow(n, idx/2, m);
		return ((r%m) * (r%m)) % m;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll B, P, M;
	while (cin >> B >> P >> M) {
		cout << (_pow(B, P, M) % M) << endl;
	}
	return 0;
}