#include <bits/stdc++.h>

#define rep(i, a, b) for ((i)=(a); (i) < (b); (i)++)
#define reps(i, a, b, s) for ((i)=(a); (i) < (b); (i)+=(s))
#define repe(i, a, b) for ((i)=(a); (i) <= (b); (i)++)
#define mod(n, M) ((((n) % (M)) + (M)) % (M))
#define pb push_back
#define MP make_pair
#define ff first
#define ss second
#define PI acos(-1)
#define prnt(arr) for (auto i : (arr)) cout << i << " "; cout << endl;
#define eps 1e-11
#define len(x) x.size()
#define FIN freopen("input.txt", "r", stdin);
#define FOUT freopen("output.txt", "w", stdout);
#define nl "\n"

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

	ull n, i=0, bills[5] = {100, 20, 10, 5, 1}, c=0;
	cin >> n;
	while (n > 0) {
		c += n/bills[i];
		n %= bills[i++];
	}
	cout << c << endl;

	return 0;
}
