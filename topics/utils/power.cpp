#include <iostream>
#define i64 long long
using namespace std;

i64 POW(i64 x, i64 p) {
	if (p == 0) return 1;
	if (p & 1) {
		i64 n = POW(x, p/2);
		return x * n * n;
	} else {
		i64 n = POW(x, p/2);
		return n * n;
	}
}

i64 POW_MOD(i64 x, i64 p, i64 M) {
	if (p == 0) return 1;
	if (p & 1) {
		i64 n = POW_MOD(x, p/2, M);
		return ((x%M) * (POW_MOD(x, p-1, M))) % M;
	} else {
		i64 n = POW_MOD(x, p/2, M);
		return ((n%M) * (n%M)) % M;
	}
}

int main() {
	cout << POW(2, 3) << endl;
	cout << POW(4, 3) << endl;
	cout << POW(2, 4) << endl;
	cout << POW(1, 3) << endl;
	cout << POW_MOD(2, 4, 2) << endl;
	return 0;
}
