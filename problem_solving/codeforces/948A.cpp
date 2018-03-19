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

	int R, C;
	char c;
	cin >> R >> C;

	char field[R][C] = {0};

	rep(int, i, 0, R) rep(int, j, 0, C) {
		cin >> c;
		if (c == '.') field[i][j] = 'D';
		else field[i][j] = c;
	}

	bool f = true;
	rep(int, i, 0, R) rep(int, j, 0, C) {
		if (field[i][j] == 'S') {
			char left = j > 0 ? field[i][j-1] : 'S';
			char right = j < C-1 ? field[i][j+1] : 'S';
			char up = i > 0 ? field[i-1][j] : 'S';
			char down = i < R-1 ? field[i+1][j] : 'S';

			if (left == 'W' or right == 'W' or up == 'W' or down == 'W') {
				f = false;
				break;
			}
		}
	}

	if (f) {
		cout << "Yes\n";
		rep(int, i, 0, R) {
			rep(int, j, 0, C) {
				cout << field[i][j];
			}
			cout << endl;
		}
	} else {
		cout << "No\n";
	}

	return 0;
}
