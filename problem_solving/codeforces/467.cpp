#include <iostream>
using namespace std;

int main() {
	int p, q, c=0, n;
	cin >> n;
	while(n--) {
		cin >> p >> q;
		if (q-p >= 2) c++;
	}
	cout << c << endl;
	return 0;
}
