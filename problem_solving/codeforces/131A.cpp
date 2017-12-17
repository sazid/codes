#include <iostream>
using namespace std;

int main() {
	string s;
	bool caps = true;
	cin >> s;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			caps = false;
			break;
		}
	}
	if (caps) {
		if (s[0] >= 'a' && s[0] <= 'z') {
			for (int i = 0; i < s.size(); i++) {
				if (i == 0) cout << (char)toupper(s[i]);
				else cout << (char)tolower(s[i]);
			}
			cout << endl;
		} else {
			for (int i = 0; i < s.size(); i++) {
				cout << (char)tolower(s[i]);
			}
			cout << endl;
		}
	} else {
		cout << s << endl;
	}
	return 0;
}
