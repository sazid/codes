#include <iostream>
using namespace std;

template <typename T>
T Max(T a, T b) {
	return a > b ? a : b;
}

int main() {
	cout << Max(12, 43) << endl;

	return 0;
}