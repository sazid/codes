#include <iostream>
#include <ios>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	int i=1;
	while (T-- > 0) {
		int m;
		bool test = false;
		cin >> m;
		while (m-- > 0) {
			string a, b;
			cin >> a >> b;
			if (a == "soda" && b == "wine") test = true;
			else if (a == "water" && b == "wine") test = true;
			else test = false;
		}
		cout << "Case " << i++ << ": " << (test ? "Yes" : "No") << "\n";
	}

	return 0;
}