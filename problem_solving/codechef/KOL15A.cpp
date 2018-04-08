#include <iostream>
using namespace std;

int main() {
	string a;
	unsigned long s = 0, T;
	cin >> T;
	while (T--) {
		cin >> a;
		auto sz = a.size();
		for (string::size_type i = 0; i < sz; i++) {
			if (a[i] >= '0' and a[i] <= '9') {
				s += (a[i]-'0');
			}
		}
		cout << s << endl;
		s=0;
	}
	return 0;
}

