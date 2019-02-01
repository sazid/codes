/*input
3 8
4 5 7
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int s = 0;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		s += (x/k);
	}
	cout << s << endl;
	return 0;
}