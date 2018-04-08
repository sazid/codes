#include <iostream>
using namespace std;

int A[128];

int main() {
	bool b = true;
	int c=0;
	string s;
	cin >> s;
	for (int i=0; i < 128; i++) A[i] = 0;
	for (int i=0; i<s.size(); i++) {
		if (A[int(s[i])] > 0) {
		} else {
			A[int(s[i])]++;
			c++;
		}
	}

	if (!(c&1)) cout << "CHAT WITH HER!\n";
	else cout << "IGNORE HIM!\n";

	return 0;
}
