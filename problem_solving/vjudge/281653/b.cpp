/*input
0
500000
*/

#include <bits/stdc++.h>
using namespace std;
int n, x, mul;

int cycle(int x, int k) {
	if (k == 0) return x;

	int last_digit = x % 10;
	x /= 10;
	last_digit *= mul;

	return cycle(last_digit+x, k-1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> x;

	int p = n-1;
	mul = 1;
	while (p-- > 0) mul *= 10;

	for (int i = 1; i <= n; ++i)
	{
		//cout << "i: " << i << ' ' << cycle(x, i) << endl;
		if (cycle(x, i) < x) {
			return cout<<"No\n", 0;
		}
	}

	return cout<<"Yes\n", 0;
}

