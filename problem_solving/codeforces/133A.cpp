#include <iostream>
using namespace std;

int main() {
	string s;
	bool t = false;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
			t = true;
			break;
		}
	}
	if (t) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
