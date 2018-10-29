#include <iostream>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	int as = a.size();
	int bs = b.size();
	if (as != bs) cout << "NO\n";
	else {
		bool flag=true;
		for (int i=0; i<as; i++) {
			if (a[i]!=b[bs-1-i]) {
				flag = false;
				break;
			}
		}
		if (flag) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}
