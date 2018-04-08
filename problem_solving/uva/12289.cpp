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

	ull T;
	string s;
	cin >> T;
	while (T--) {
		cin >> s;
		if (s.size() > 3) cout << "3\n";
		else {
			int one_count = 0;
			int two_count = 0;
			if (s[0] == 'o') one_count++;
			if (s[1] == 'n') one_count++;
			if (s[2] == 'e') one_count++;
			if (one_count >= 2) cout << "1\n";
			
			if (s[0] == 't') two_count++;
			if (s[1] == 'w') two_count++;
			if (s[2] == 'o') two_count++;
			if (two_count >= 2) cout << "2\n";
		}
	}
	
	return 0;
}
