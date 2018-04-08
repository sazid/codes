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

void seive(vector<bool> v, ull p, ull y) {
	for (ull k = 3; k <= y; k += 2) {
		for (ull x = k*k; x <= y; x += 2*k) {
			v[x] = 1;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ull p, y;
	cin >> p >> y;
	vector<bool> v(y);
	seive(v, p, y);

	for (ull i = y; i > 2; i--) {
		if (v[i] || (i&1)) {
			cout << i << endl;
			return 0;
		}
	}

	cout << -1 << endl;
	return 0;
}
