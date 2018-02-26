#include <bits/stdc++.h>
#define rep(T, i, a, b) for (T (i)=(a); (i) < (b); (i)++)
#define repe(T, i, a, b) for (T (i)=(a); (i) <= (b); (i)++)

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x;
	vi A;
	A.push_back(0);
	cin >> n;
	while (n--) {
		cin >> x;
		A.push_back(x);
	}

	bool f = false;
	int s = A.size();
	for (int i = 1; i < s; i++) {
		int a = A[i];
		int b = A[a];
		int c = A[b];
		if (c == i && b != i) {
			f = true;
			break;
		}
	}

	if (f) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}
