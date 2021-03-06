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

	vector<string> v1;
	vector<string> v2;
	int i, n, c=0;
	string s;
	cin >> n;
	rep(i,0,n) cin >> s, v1.pb(s);
	rep(i,0,n) cin >> s, v2.pb(s);

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	rep(i,0,n) {
		// sort(v1[i].begin(), v1[i].end());
		// sort(v2[i].begin(), v2[i].end());
		int k, l=v1[i].size();
		rep(k,0,l) {
			if (v1[i][k] != v2[i][k]) c++;
		}
	}
	cout << c << endl;

	return 0;
}
