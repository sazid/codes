// https://open.kattis.com/problems/synchronizinglists
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

	int x, n;
	vi v1, v2, v3;
	map<int, int> m;
	bool f = true;
	while (1) {
		cin >> n;
		if (f) {
			f = !f;
		} else if (n != 0) {
			cout << "\n";
		}
		if (n==0) break;
		v1.clear();
		v2.clear();
		v3.clear();
		m.clear();
		
		rep(long, i, 0, n) {
			cin >> x;
			v1.PB(x);
		}
		rep(long, i, 0, n) {
			cin >> x;
			v2.PB(x);
		}

		v3 = v1;
		sort(v2.begin(), v2.end());
		sort(v3.begin(), v3.end());

		auto sz = v3.size();
		rep(long, i, 0, sz) {
			m.insert({v3[i], v2[i]});
		}

		rep(long, i, 0, sz) {
			cout << m[v1[i]] << "\n";
		}
	}

	return 0;
}
