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

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string s;
	cin >> n >> s;

	if (n==1) {
		cout << "No\n";
		return (0);
	}

	for (int i = 1; i < n; i++) {
		if (s[i]!='?' and s[i] == s[i-1]) {
			cout << "No\n";
			return 0;
		}
	}

	int count = 0;
	for (char c : s) {
		if (c == '?')
			count++;
	}

	if (count == n) {
		cout << "Yes\n";
		return 0;
	} else if (count <= 1) {
		cout << "No\n";
		return 0;
	}

	for (int i = 2; i < n-2; i++) {
		char r = s[i];
		char p = s[i-2];
		char q = s[i+2];

		if (p == q and r != '?' and p != '?' and s[i-1]=='?' and s[i+1]=='?') {
			cout << "No\n";
			return 0;
		}
	}

	cout << "Yes\n";

	return 0;
}

