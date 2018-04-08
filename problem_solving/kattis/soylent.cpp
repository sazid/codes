// https://open.kattis.com/problems/soylent
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	double n;
	cin >> T;
	while (T--) {
		cin >> n;
		cout << ceil(n/400.0) << endl;
	}
	return 0;
}

