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

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long N, M, x, a, b, p, q;
	vector<long> v;
	while (scanf("%ld", &N)!=EOF) {
		a = b = p = q = 0;
		v.clear();
		while (N--) {
			scanf("%ld", &x);
			v.PB(x);
		}
		scanf("%ld", &M);

		sort(v.begin(), v.end());
		auto sz = v.size();

		for (long i=0; i <= sz/2+1; i++) {
			p = v[i];
			q = M-p;
			auto lb = upper_bound(v.begin()+i, v.end(), p)-1;
			auto ub = lower_bound(v.begin()+1, v.end(), q);
			if ( binary_search( v.begin()+i, v.end(), q ) and lb != ub ) {
				a = p;
				b = q;
			}
		}

		if (a > b) swap(a, b);
		printf("Peter should buy books whose prices are %ld and %ld.\n\n", a, b);
	}

	return 0;
}
