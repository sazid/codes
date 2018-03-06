#include <bits/stdc++.h>

#define rep(T, i, a, b) for (T (i)=(a); (i) < (b); (i)++)
#define repe(T, i, a, b) for (T (i)=(a); (i) <= (b); (i)++)
#define MOD(n, M) ((((n) % (M)) + (M)) % (M))
#define PB push_back
#define F first
#define S second
#define PI acos(-1)
#define PRNT(arr) for (auto i : (arr)) cout << i << " "; cout << endl;

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

	ull A, B, x, y, z, y_needed = 0, b_needed = 0, sum = 0;
	cin >> A >> B >> x >> y >> z;
	y_needed = 2*x + y;
	b_needed = y + 3*z;

	if (y_needed > A) sum += (y_needed - A);
	if (b_needed > B) sum += (b_needed - B);

	cout << sum << endl;

	return 0;
}
