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
	double h, m, start, D, C, N, ans;
	cin >> h >> m >> start >> D >> C >> N;
	
	if (h >= 20) {
		C = C-(C*.2);
		ans = ceil(start/N)*C;
	} else {
		double a1 = ceil(start/N)*C;
		double d = 1200-(h*60+m);
		C = C-(C*.2);
		double a2 = ceil((start+(d*D))/N)*C;

		ans = min(a1,a2);
	}
	printf("%.4lf\n", ans);
	return 0;
}

