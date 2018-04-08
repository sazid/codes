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

bool game(ull n, ull p) {
	if (p >= n) return true;

	if (game(n, p*2)
		or game(n, p*3)
		or game(n, p*4)
		or game(n, p*5)
		or game(n, p*6)
		or game(n, p*6)
		or game(n, p*7)
		or game(n, p*8)
		or game(n, p*9)) {
		return true;
	}

	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ull n;
	cin >> n;
	if (game(n, 1)) {
		cout << "Stan wins.\n";
	} else {
		cout << "Ollie wins.\n";
	}

	return 0;
}
