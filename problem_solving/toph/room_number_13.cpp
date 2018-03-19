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

	int T;
	cin >> T;
	multiset<int> mem;
	while (T--) {
		mem.clear();
		ul n, x;
		cin >> n >> x;
		n--;
		mem.insert(x);
		while (n--) {
			cin >> x;
			mem.erase(mem.begin(), mem.upper_bound(x));
			mem.insert(x);
		}
		cout << mem.size() << "\n";
	}

	return 0;
}
