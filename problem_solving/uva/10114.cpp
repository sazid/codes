#include <bits/stdc++.h>

#define rep(T, i, a, b) for (T (i)=(a); (i) < (b); (i)++)
#define repe(T, i, a, b) for (T (i)=(a); (i) <= (b); (i)++)
#define MOD(n, M) ((((n) % (M)) + (M)) % (M))
#define PB push_back
#define F first
#define S second
#define PI acos(-1)
#define PRNT(arr) for (auto i : arr) cout << i << " "; cout << endl;

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int duration, no_of_depreciation, c=0, m;
	double down_payment, loan, val, dep[110] = {0}, d, per_month;

	while (1) {
		c = 0;
		for (int i=0; i <= 105; i++) dep[i] = 0;
		cin >> duration >> down_payment >> loan >> no_of_depreciation;
		if (duration < 0) break;
		cin >> m >> d;

		per_month = loan / duration;
		no_of_depreciation--;
		val = loan + down_payment;
		val -= (val * d);
		
		for (int i = m; i <= 105; i++) dep[i] = d;
		while(no_of_depreciation--) {
			cin >> m >> d;
			for (int i = m; i <= 105; i++) dep[i] = d;
		}

		int i = 1;
		while (loan > val) {
			val -= (val * dep[i]);
			loan -= per_month;
			c++;
			i++;
		}

		cout << c << (c == 1 ? " month" : " months") << endl;
	}
	
	return 0;
}
