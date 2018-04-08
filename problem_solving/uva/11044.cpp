#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	long T, m, n;
	cin >> T;
	while(T--) {
		cin >> m >> n;
		cout << (m/3)*(n/3) << "\n";
	}

	return 0;
}