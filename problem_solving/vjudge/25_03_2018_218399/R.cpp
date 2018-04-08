#include <bits/stdc++.h>

#define rep(T, i, a, b) for (T (i)=(a); (i) < (b); (i)++)
#define repe(T, i, a, b) for (T (i)=(a); (i) <= (b); (i)++)
#define MOD(n, M) ((((n) % (M)) + (M)) % (M))
#define PB push_back
#define F first
#define S second
#define PI acos(-1)
#define PRNT(arr) for (auto i : (arr)) cout << i << " "; cout << endl;
#define eps 1e-11
#define len(x) x.size()
#define FIN freopen("input.txt", "r", stdin);
#define FOUT freopen("output.txt", "w", stdout);
#define NL "\n"

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

// double max = numer_limits<double>::max()
// double INFINITY = numeric_limits<double>::infinity();

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, k, x, y;
	cin >> n >> m >> k;
	if (k == 0) {
		cout << "NO\n";
		return 0;
	}

	if (n >= 8 and m >= 8) {
		rep(int, i, 0, k) {
			cin >> x >> y;
			
			if (x <= 5 or (n-x) <= 4) {
				cout << "YES\n";
				return 0;
			}
			if (y <= 5 or (m-y) <= 4) {
				cout << "YES\n";
				return 0;
			}
		}
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}

	return 0;
}
