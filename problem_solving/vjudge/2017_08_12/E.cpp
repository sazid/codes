#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, i=1;
	const double pi = acos(-1);
	cin >> T;
	while (T-- > 0) {
		double r1, r2, r3, areaTri, areaC1, areaC2, areaC3, a, b, c, A, B, C, p;
		cin >> r1 >> r2 >> r3;
		a = r2 + r3;
		b = r1 + r3;
		c = r1 + r2;
		if (a == b && a == c) {
			A = pi/3;
			B = pi/3;
			C = pi/3;
		} else {
			A = acos((b*b + c*c - a*a) / (2*b*c));
			B = acos((c*c + a*a - b*b) / (2*a*c));
			C = acos((a*a + b*b - c*c) / (2*a*b));
		}
		p = (a + b + c) / 2;
		areaTri = sqrt(p*(p-a)*(p-b)*(p-c));
		areaC1 = (A/2) * r1*r1;
		areaC2 = (B/2) * r2*r2;
		areaC3 = (C/2) * r3*r3;
		printf("Case %d: %.11lf\n", i++, areaTri-(areaC1+areaC2+areaC3));
	}

	return 0;
}
