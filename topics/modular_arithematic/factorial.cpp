#include <iostream>
using namespace std;

// use (mod x) to find out the factorial of n
int fact(int n, int x) {
	int f = 1;

	for (int i = 1; i <= n; i++) {
		f = ((f%x) * (i%x))%x;
	}

	return f;
}

int main() {
	cout << fact(50, 1) << endl;
	cout << fact(100, 97) << endl;

	return 0;
}
