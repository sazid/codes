#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b="#";
	getline(cin, a);
	string::size_type sz = a.size();
	for (string::size_type i = 1; i < sz; i++) {
		if (a[i] != ' ') b+=a[i];
	}
	cout << b << endl;
	return 0;
}
