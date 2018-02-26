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

ll op(ll n) {
	n *= 567;
	n /= 9;
	n += 7492;
	n *= 235;
	n /= 47;
	n -= 498;
	//cout << n << endl;
	n /= 10;
	return abs(n%10);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << op(n) << "\n";
	}
	
	return 0;
}
