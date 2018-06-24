#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int cn=0, co=0;
	for (char c : s)
		if (c == '-') cn++;
		else co++;
	
	if (co == 0 or cn%2 == 0) cout << "yes\n";
	else cout << "no\n";
	return 0;
}

