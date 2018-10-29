#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x, y, n, c=0;
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cin >> n;
			if (n == 1) {
				y = i;
				x = j;
			}
		}
	}

	c += abs(x-3);
	c += abs(y-3);
	cout << c << endl;
	return 0;
}
