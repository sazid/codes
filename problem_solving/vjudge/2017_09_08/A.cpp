#include <bits/stdc++.h>
using namespace std;
#define MAX_NUMS 1000010

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T, i=1;
	cin >> T;
	while (T-- > 0) {
		long candies, r=-1;
		cin >> candies;
		
		if (candies >= 8) {
			long last_div=-1;
			for (long k = 1; k <= candies/3 + 1; k++) {
				long rem = candies - 3*k;
				if (rem && rem % 5 == 0) {
					last_div = 3*k;
				}
			}
			r = last_div;
		}

		cout << "Case " << i++ << ": " << r << "\n";
	}

	return 0;
}
