/*input
5
50000
*/

#include <bits/stdc++.h>
using namespace std;
int n, x;

int cycle(int x, int k) {
	if (k == 0) return x;

	int last_digit = x % 10;
	x /= 10;

	int p = n-1;
	while (p-- > 0) last_digit *= 10;

	return cycle(last_digit + x, k-1);
}

int main() {
	cin >> n >> x;
	for (int i = 1; i <= n-1; ++i)
	{
		cout << "i: " << i << ' ' << cycle(x, i) << endl;
		if (cycle(x, i) < x) {
			return cout<<"No\n", 0;
		}
	}

	return cout<<"Yes\n", 0;
}