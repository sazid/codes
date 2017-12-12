#include <iostream>

using namespace std;

int main() {
	int x[10] = {23, 53, 54, 12, 23, 45, 94, 90, 100, 4};
	int max_range[10] = {0};
	max_range[0] = x[0];
	for (int i = 1; i < 10; i++) {
		if (max_range[i-1] < x[i]) {
			max_range[i] = x[i];
		} else {
			max_range[i] = max_range[i-1];
		}
	}

	int n;
	while (cin >> n) {
		if (n > 9) {
			cout << "Invalid index" << endl;
			continue;
		} else {
			cout << max_range[n] << endl;
		}
	}

	return 0;
}

