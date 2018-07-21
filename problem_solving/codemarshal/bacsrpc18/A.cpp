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

	ll T, n, arr[105], i, j, k;
	cin >> T;

	repe(i, 1, T) {
		bool f = false;
		cout << "Case " << i << ": ";
		cin >> n;

		rep(j,0,n) cin >> arr[j];
		
		rep(j,1,n) {
			if (arr[j] - arr[j-1] == 1) {
				f = true;
				break;
			}
		}


		if (f) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;
}
