#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	bool f = true;
	for (int i = 1; i < s.size(); ++i) {
		if (islower(s[i])) {
			f = false;
			break;
		}
	}
	
	if (f) {
		if (islower(s[0])) s[0] = toupper(s[0]);
		else s[0] = tolower(s[0]);
		for (int i = 1; i < s.size(); ++i) {
			s[i] = tolower(s[i]);
		}
	}
	
	cout << s << endl;
	return 0;
}
