// https://open.kattis.com/problems/kemija08
#include <bits/stdc++.h>
using namespace std;

bool isv(char c) {
	if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
	return false;
}

int main() {
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (i+2<s.size() && isv(s[i]) && s[i+1]=='p' && isv(s[i+2])) {
			s.erase(i+1, 2);
		}
	}
	cout << s << endl;
	return 0;
}

