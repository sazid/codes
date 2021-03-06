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

	ll c = 1;
	string s;
	while (1) {
		cin >> s;
		if (s == "#") break;
		cout << "Case " << c++ << ": ";
		if (s == "HELLO") cout << "ENGLISH\n";
		else if (s == "HELLO") cout << "ENGLISH\n";
		else if (s == "HOLA") cout << "SPANISH\n";
		else if (s == "HALLO") cout << "GERMAN\n";
		else if (s == "BONJOUR") cout << "FRENCH\n";
		else if (s == "CIAO") cout << "ITALIAN\n";
		else if (s == "ZDRAVSTVUJTE") cout << "RUSSIAN\n";
		else cout << "UNKNOWN\n";
	}

	return 0;
}
