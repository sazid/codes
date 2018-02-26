#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	cout.sync_with_stdio(0);
	cin.tie(0);
	ll T, a, b;
	cin >> T;
	while (T--) {
		cin >> a >> b;
		if (a == b) cout << "=\n";
		else if (a > b) cout << ">\n";
		else cout << "<\n";
	}
	return 0;
}