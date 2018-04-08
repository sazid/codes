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
	
	int T=1;
	string s;
	while (1) {
		cin >> s;
		if (s == "#") break;
		else if (s == "HELLO") cout << "Case " << T++ << ": " << "ENGLISH\n";
		else if (s == "HOLA") cout << "Case " << T++ << ": " << "SPANISH\n";
		else if (s == "HALLO") cout << "Case " << T++ << ": " << "GERMAN\n";
		else if (s == "BONJOUR") cout << "Case " << T++ << ": " << "FRENCH\n";
		else if (s == "CIAO") cout << "Case " << T++ << ": " << "ITALIAN\n";
		else if (s == "ZDRAVSTVUJTE") cout << "Case " << T++ << ": " << "RUSSIAN\n";
		else cout << "Case " << T++ << ": " << "UNKNOWN\n";
	}

	return 0;
}
