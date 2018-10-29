#include <iostream>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	char s[n], a[n];
	cin >> s;

	for (int i = 0; i < t; i++) {
		for (int k = 0; k < n; k++) {
			if (s[k]=='G' && k-1 >= 0 && s[k-1]=='B') {
				s[k-1]='G';
				s[k]='B';
				k++;
				continue;
			}
		}
	}

	cout << s << endl;

	return 0;
}
