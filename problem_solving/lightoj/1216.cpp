#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

int main() {
	int T;
	cin >> T;
	
	for (int kase = 1; kase <= T; ++kase) {
		double ans = 0.0;
		
		double r1, r2, h, p;
		cin >> r1 >> r2 >> h >> p;
		
		r1 = r2 + (p * (r1 - r2)) / h;
		
		ans = (PI * p * (r1*r1 + r1*r2 + r2*r2))/3.0;
		
		cout << fixed << setprecision(9) << "Case " << kase << ": " << ans << '\n';
	}
	
	return 0;
}
