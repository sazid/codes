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

long low_bnd(vector<long> A, long x) {
	long begin = 0;
	long end = A.size() - 1;
	long mid;

	while (begin <= end) {
		mid = begin + (end-begin)/2;
		if (x == A[mid]) end = mid-1;
		else if (x < A[mid]) end = mid-1;
		else begin = mid+1;
	}

	return begin;
}

long high_bnd(vector<long> A, long x) {
	long begin = 0;
	long end = A.size() - 1;
	long mid;

	while (begin <= end) {
		mid = begin + (end-begin)/2;
		if (x == A[mid]) begin = mid+1;
		else if (x < A[mid]) end = mid-1;
		else begin = mid+1;
	}

	return end;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long n, x, q, lb, ub;
	vector<long> A;
	cin >> n;
	A.reserve(n);
	while (n--) {
		cin >> x;
		A.PB(x);
	}

	cin >> q;
	while (q--) {
		cin >> x;
		lb = low_bnd(A, x);
		auto low = lower_bound(A.begin(), A.end(), x);
		auto hi = upper_bound(A.begin(), A.end(), x);
		lb = low-A.begin();
		ub = hi-A.begin();

		if (lb > 0) {
			cout << A[lb-1] << ' ';
		} else {
			if (A[lb] == x) cout << "X ";
			else cout << A[0] << ' ';
		}

		if (ub < A.size() and A[ub] != x) {
			cout << A[ub];
		} else {
			cout << 'X';
		}
		cout << '\n';
	}

	return 0;
}

