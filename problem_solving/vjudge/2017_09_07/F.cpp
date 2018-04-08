#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n, c=0;
	int x;
	int count[5] = {0, 0, 0, 0, 0};
	cin >> n;
	while (n-- > 0) {
		cin >> x;
		count[x]++;
	}

	c 	= count[4]
		+ count[3] 
		+ count[2] / 2;

	count[1] -= count[3];

	bool odd2cars = count[2] & 1;
	if (odd2cars) {
		c++;

		if (count[1] > 0) {
			count[1]-=2;
		}
	}

	if (count[1] > 0) {
		// same as writing
		// c += count[1]%4 + count[1]/4
		c+=(count[1]+3)/4;
	}

	cout << c << "\n";

	return 0;
}