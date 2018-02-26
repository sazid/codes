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
	
	int T, i=1, x, y, z;
	cin >> T;
	while (T--) {
		cin >> x >> y >> z;
		if (x > 20 || y > 20 || z > 20) cout << "Case " << i++ << ": bad\n";
		else cout << "Case " << i++ << ": good\n";
	}

	return 0;
}
