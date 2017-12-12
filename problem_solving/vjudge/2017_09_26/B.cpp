#include <bits/stdc++.h>
using namespace std;

long long faka;
long long n;
long long number = 0;
vector<long long> vec;

void comb(long long pos) {
	if (pos >= faka) {
		for (long long x: vec) {
			cout << x << " ";
		}
		cout << endl;
		return;
	}

	for (long long i = 0; i < n; i++) {
		vec.push_back(i);
		comb(pos + 1);
		vec.pop_back();
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long T, i = 1;
	cin >> T;

	while (T-- > 0) {
		number = 0;
		cin >> n;
		cin >> faka;
		comb(0);
		cout << "Case " << i << ": " << (number % 1000003) << "\n";		
	}
	return 0;
}
