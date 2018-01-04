#include <iostream>
using namespace std;

int main() {
	long long k, n, w, target, needed;
	cin >> k >> n >> w;
	target = (k*w*(w+1))/2;
	needed = target-n;
	if (needed < 0) needed = 0;
	cout << needed << endl;
	return 0;
}
