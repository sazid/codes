#include <bits/stdc++.h>

#define rep(i, a, b) for ((i)=(a); (i) < (b); (i)++)
#define rrep(i, a, b) for ((i)=(a); (i) >= (b); (i)--)
#define reps(i, a, b, s) for ((i)=(a); (i) < (b); (i)+=(s))
#define repe(i, a, b) for ((i)=(a); (i) <= (b); (i)++)
#define mod(n, M) ((((n) % (M)) + (M)) % (M))
#define pb push_back
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

    int n, k, i, x, f=0, b=0;
    cin >> n >> k;
    deque<int> v;
    
    rep(i, 0, n) cin >> x, v.push_back(x);
    
    for (i = 0; i < v.size(); i++) {
        if (v[i] > k) break;
        f++;
    }
    for (int j = v.size()-1; j >= 0; j--) {
        if (i == j || v[i] > k) break;
        b++;
    }
    cout << b+f << endl;

	return 0;
}
