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

	string s;
	ll T;
	cin >> T;
	cin.ignore();
	while (T--) {
		bool f = true;
		getline(cin, s);

		for (auto it = s.begin(); it != s.end()-1; it++) {
			if (*it == 'F' && *(it+1) == 'M') {
				*it = 'M';
				*(it+1) = 'F';
			}
		}

		cout << s << endl;

		s += " ";
		s += s[0];

		for (auto it = s.begin(); it != s.end()-1; it++) {
			if (*it == ' ' && *(it-1) == *(it+1)) {
				f = false;
				break;
			}
		}

		if (f) cout << "LOOP\n";
		else cout << "NO LOOP\n";
	}

	return 0;
}
