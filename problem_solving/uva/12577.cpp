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
	
	string s;
	int i=1;
	while (1) {
		cin >> s;
		if (s == "*") break;
		else if (s == "Hajj") cout << "Case " << i++ << ": Hajj-e-Akbar\n";
		else cout << "Case " << i++ << ": Hajj-e-Asghar\n";
	}

	return 0;
}
