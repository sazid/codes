#include <iostream>
using namespace std;

int main() {
	unsigned long long n, r, c=0;
	cin >> n;
	while (n > 0) {
		r = n%10;
		n /= 10;
		if (r==4 || r==7) c++;
	}

	bool lucky=false;
	while (c > 0) {
		r = c%10;
		c /= 10;
		if (!(r==4 || r==7)) {
			lucky=false;
			break;
		} else lucky=true;
	}
	
	if (lucky) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
