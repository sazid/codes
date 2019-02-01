#include <bits/stdc++.h>
using namespace std;

int k = 3;
constexpr int n = 15;

int coins[] = {4, 7, 10};
int way[n + 1];

int main() {
	way[0] = 1;
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < k; ++j) {
			if (i >= coins[j]) {
				way[i] += way[i - coins[j]];
			}
		}
	}
	
	for (int i = 0; i <= n; ++i) {
		cout << i << ": " << way[i] << endl;
	}
	
	return 0;
}
