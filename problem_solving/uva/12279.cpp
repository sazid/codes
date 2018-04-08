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

	int n, s, g, x, i=1;
	while (1) {
		s=0;
		g=0;
		cin >> n;
		if (n==0) break;
		while (n--) {
			cin >> x;
			if (x == 0) g++;
			else s++;
		}
		cout << "Case " << i++ << ": " << (s-g) << "\n";
	}
	
	return 0;
}
