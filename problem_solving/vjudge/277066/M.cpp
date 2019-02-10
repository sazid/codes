/**
 * Idea: https://i.ibb.co/pyHmddr/Notes-181227-124100-88e-1.jpg
 */

#include <bits/stdc++.h>
using namespace std;

double guess_Lp(double L, double R) {
	double theta = acos(L/(2.0*R));

	double r = R*sin(theta);

	double alpha = acos(L/(2.0*r));

	return R * 2.0 * alpha;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	double R, L, n, C, Lp, r, alpha, theta, low, high, mid;
	const double esp = 1e-6;

	// here mid = R
	int T;
	scanf("%d", &T);

	for (int cs = 1; cs <= T; ++cs) {
		scanf("%lf %lf %lf", &L, &n, &C);

		Lp = (1+n*C)*L;
		
		low = 0.0, high = 1000.0;

		while (low <= high) {
			// mid = R
			mid = low + (high - low)/2.0;

			R = guess_Lp(L, mid);

			if (abs(Lp - R) < esp) break;
			else if (R < Lp) low = mid;
			else high = mid;
		}

		printf("Case %d: %.5lf\n", cs, R);
	}

	return 0;
}

