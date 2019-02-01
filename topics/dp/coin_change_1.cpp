#include <bits/stdc++.h>
using namespace std;

int k = 3;
constexpr int n = 15;

int coins[] = {4, 7, 10};
bool possible[n + 1];

int main() {
	// it is possible to make 0 units without even anything
	possible[0] = 1;
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < k; ++j) {
			if (i >= coins[j]) {
				possible[i] |= possible[i - coins[j]];
			}
		}
	}
	
	for (int i = 1; i <= n; ++i) {
		cout << "i: " << i << " possible: " << possible[i] << endl;
	}
	
	return 0;
}
