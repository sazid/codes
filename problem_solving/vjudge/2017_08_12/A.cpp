#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, p, l, i=1;
	cin >> n;
	while(n--) {
		cin >> p >> l;
		cout << "Case " << i << ": " << ((max(p,l)-min(p,l))*4)+p*4+9+10 << "\n";
		i++;
	}

	return 0;
}