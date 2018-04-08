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
	
	int t, n, x, mn, mx;
	bool f=true;
	cin >> t;
	while(t--) {
		f=true;
		cin >> n;
		mx=0;
		mn=0;
		while (n--) {
			cin >> x;
			if (f) {
				mn=x;
				f=false;
			}
			mn = min(x, mn);
			mx = max(x, mx);
		}
		cout << (mx-mn)*2 << "\n";
	}

	return 0;
}
