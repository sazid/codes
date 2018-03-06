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

	ull B, N, H, W, w, p, a, m;
	while (cin >> N >> B >> H >> W) {
		m = -1; // assign to max value of unsigned long long
		while (H--) {
			w = W;
			cin >> p;
			while (w--) {
				cin >> a;
				if (a < N) continue;
				m = min(m, N*p);
			}
		}

		if (m > B) cout << "stay home\n";
		else cout << m << "\n";
	}

	return 0;
}
