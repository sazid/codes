// 1005. Stone Pile
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int x[n];
	int mini;
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	mini = abs(x[0]-x[1]);
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			if (i == k) continue;
			mini = min(mini, abs(x[i]-x[k]));
		}
	}
	printf("%d\n", mini);
	return 0;
}
