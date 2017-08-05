#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;

	while (cin >> n) {
		int colors_left[n];
		int colors_right[n];
		int smoke_left = 0;
		int smoke_right = 0;
		int a, b;
		for (int i=0;i<n;i++) {
			cin >> colors_left[i];
			colors_right[i] = colors_left[i];
			if (i >= 1) {	// its the second input
				a = colors_left[i-1];
				b = colors_left[i];
				smoke_left += a*b;
				colors_left[i] = (a+b)%100;
			}
		}

		for (int i=n-1;i>=0;i--) {
			if (i-1 >= 0) {
				a = colors_right[i-1];
				b = colors_right[i];
				smoke_right += a*b;
				colors_right[i-1] = (a+b)%100;
			}
		}		

		if (smoke_left <= smoke_right)
			cout << smoke_left << endl;
		else
			cout << smoke_right << endl;
	}

	return 0;
}