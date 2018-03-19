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
typedef vector<ul> vul;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vul v;
	ul n, x, m, t=0;
	cin >> n;
	v.reserve(n+1);
	while (n--) {
		cin >> x;
		t += x;
		v.PB(t);
	}
	cin >> m;
	while (m--) {
		cin >> x;
		cout << lower_bound(v.begin(), v.end(), x)-v.begin()+1 << NL;
	}

	return 0;
}

