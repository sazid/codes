#include <iostream>
using namespace std;

int main() {
	int n, i=1, x;
	cin >> n;
	int A[n+1];
	while (n--) {
		cin >> x;
		A[x] = i++;
	}
	for (x=1; x<i; x++) {
		cout << A[x] << " ";
	}
	cout << "\n";

	return 0;
}
