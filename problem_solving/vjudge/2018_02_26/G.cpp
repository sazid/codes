#include <bits/stdc++.h>

#define rep(T, i, a, b) for (T (i)=(a); (i) < (b); (i)++)
#define repe(T, i, a, b) for (T (i)=(a); (i) <= (b); (i)++)
#define MOD(n, M) ((((n) % (M)) + (M)) % (M))
#define PB push_back
#define F first
#define S second
#define PI acos(-1)
#define PRNT(arr) for (auto i : (arr)) cout << i << " "; cout << endl;

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<ll> vll;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, x;
	cin >> n;
	vll v;
	while (n--) {
		cin >> x;
		v.PB(x);
	}
	sort(v.begin(), v.end());

	for (ll i = v.size()-1; i >= 0; i--) {
		x = sqrt(v[i]);
		if (x*x != v[i]) {
			cout << v[i] << endl;
			return 0;
		}
	}
	cout << -1 << endl;

	return 0;
}
