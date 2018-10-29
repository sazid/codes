#include <bits/stdc++.h>
#define rep(T, i, a, b) for (T (i)=(a); (i) < (b); (i)++)
#define repe(T, i, a, b) for (T (i)=(a); (i) <= (b); (i)++)
#define PB push_back

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll mx = 1, boxes = -1, prod, rem, b=0, cbx, n, k, x;
	vector<ll> A;
	A.PB(0);

	cin >> n >> k;

	while (k--) {
		cin >> x;
		A.PB(x);
	}

	ll s = A.size();
	rep(ll, i, 1, s) {
		rem = n % A[i];
		prod = n/A[i];
		cbx = n-(A[i]*prod);
		if (boxes == -1 || boxes > cbx && n >= A[i]) {
			// cout << i << " A[i]: " << A[i] << " prod: " << prod << " cbx: " << cbx << endl;
			mx = i;
			boxes = cbx;
			b = prod;
		}
	}

	cout << mx << " " << b << endl;

	return 0;
}
