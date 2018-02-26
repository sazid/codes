#include <bits/stdc++.h>

#define rep(T, i, a, b) for (T (i)=(a); (i) < (b); (i)++)
#define repe(T, i, a, b) for (T (i)=(a); (i) <= (b); (i)++)
#define MOD(n, M) ((((n) % (M)) + (M)) % (M))
#define PB push_back
#define F first
#define S second
#define PI acos(-1)

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll k, n, m, x, y;
	while (true) {
		cin >> k;
		if (k==0) break;
		cin >> n >> m;
		while (k--) {
			cin >> x >> y;
			if (x == n || y == m) cout << "divisa\n";
			else {
				if (y > m) cout << "N";
				else cout << "S";
				if (x > n) cout << "E\n";
				else cout << "O\n";
			}
		}
	}

	return 0;
}
