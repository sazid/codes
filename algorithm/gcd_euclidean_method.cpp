#include <iostream>
#include <algorithm>
using namespace std;

int gcd_recursive(int a, int b) {
	if (b == 0) return a;
	return gcd_recursive(b, a % b);
}

int gcd_iterative(int a, int b) {
	while (b) {
		a = a % b;
		swap(a, b);
	}
	return a;
}

int main() {
	cout << gcd_recursive(12, 8) << endl;
	cout << gcd_iterative(12, 8) << endl;
	cout << __gcd(12, 8) << endl;

	return 0;
}