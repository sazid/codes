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

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	ll i, T, j, c=1;
	while (cin >> s) {
		cin >> T;
		cout << "Case " << c++ << ":\n";
		while (T-- > 0) {
			bool f = true;
			cin >> i >> j;
			char c = s[min(i, j)];
			for (ull k = min(i, j); k <= max(i, j); k++) {
				if (c != s[k]) {
					f = false;
					break;
				}
			}
			if (f) cout << "Yes\n";
			else cout << "No\n";
		}
	}

	return 0;
}
