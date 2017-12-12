// Find the number of combinations from given numbers, whose sum is 6
#include <iostream>
#include <cstdio>
#include <cmath>
#define CBIT(var, shift) ((var) & (1 << (shift)))
using namespace std;

int main() {
	int x[] = {4, 2, 3, 1};
	int count = 0;
	int range = pow(2, 4);
	for (int i = 0; i < range; i++) {
		int sum = 0;

		for (int sh = 0; sh < 4; sh++) {
			if (CBIT(i, sh)) {
				sum += x[sh];
			}
		}

		if (sum == 6) count++;
	}
	cout << count << endl;

	return 0;
}
