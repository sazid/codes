// 11827 - Maximum GCD
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	while (b) {
		a = a % b;
		swap(a, b);
	}
	return a;
}

int main() {
	int N;
	string M;
	scanf("%d", &N);
	while (N-- > 0) {
		getchar();
		vector<int> x;
		int a;
		getline(cin, M);
		stringstream ssin(M);
		while (ssin >> a) {
			x.push_back(a);
		}

		int gcd_max=1;
		for (int qq=0; qq < x.size()-1; qq++) {
			for (int ww=qq+1; ww < x.size(); ww++) {
				gcd_max = max(gcd_max, gcd(x[qq], x[ww]));
			}
		}
		printf("%d\n", gcd_max);
	}
	return 0;
}
