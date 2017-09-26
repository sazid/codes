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
	while (scanf("%d", &N) != EOF) {
		if (N == 0) break;
		int G=0;
		for (int i = 1; i < N; i++)
			for (int j = i+1; j<= N; j++)
				G+=gcd(i, j);
		printf("%d\n", G);
	}
	return 0;
}
