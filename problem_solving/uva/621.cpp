#include <bits/stdc++.h>

#define rep(T, i, a, b) for (T (i)=(a); (i) < (b); (i)++)
#define repe(T, i, a, b) for (T (i)=(a); (i) <= (b); (i)++)
#define MOD(n, M) ((((n) % (M)) + (M)) % (M))
#define PB push_back
#define F first
#define S second
#define PI acos(-1)
#define NP string::npos

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
	ll n;
	cin >> n;
	while (n--) {
		cin >> s;
		if (s == "1" || s == "4" || s == "78") cout << "+\n";
		else if (s.size() >= 3 && s[s.size()-2] == '3' && s[s.size()-1] == '5') cout << "-\n";
		else if (s.size() >= 3 && s[0] == '9' && s[s.size()-1] == '4') cout << "*\n";
		else if (s.size() >= 3 && s[0] == '1' && s[1] == '9' && s[2] == '0') cout << "?\n";
		else cout << "?\n";
	}

	return 0;
}
