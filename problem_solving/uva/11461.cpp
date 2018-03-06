#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long a, b, c, sq;

	while (scanf("%lld %lld", &a, &b) && a && b) {
		c = 0;
		for (auto i = a; i <= b; i++) {
			sq = sqrt(i);
			if (i == sq*sq) c++;
		}
		printf("%lld\n", c);
	}
	return 0;
}
