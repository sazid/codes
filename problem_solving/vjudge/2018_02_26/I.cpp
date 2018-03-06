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

int letters[128];

void init() {
	ll i = 1;
	for (char c = 'a'; c <= 'z'; c++) letters[int(c)] = i++;
	i = 1;
	for (char c = 'A'; c <= 'Z'; c++) letters[int(c)] = i++;
}

ll dig(ll n) {
	ll sum = 0;
	while (n > 0) {
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

ll digitSum(ll n) {
	while (n >= 10) {
		n = dig(n);
	}
	return n;
}

ll charSum(string s) {
	ll sum = 0;
	for (char c : s) {
		sum += letters[(int)c];
	}
	return sum;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	init();

	string a, b;
	while (getline(cin, a) && getline(cin, b)) {
		double sum_a = digitSum(charSum(a));
		double sum_b = digitSum(charSum(b));
		if (sum_a > sum_b) swap(sum_a, sum_b);
		cout << fixed << setprecision(2) << (sum_a*100.0)/sum_b << " %\n";
	}

	return 0;
}
