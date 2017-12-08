#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, c=1;
	char inp[50], type[50];
	cin >> T;
	while (T-- > 0) {
		long long m = 0;
		int n;
		printf("Case %d:\n", c++);
		scanf("%d", &n);
		// ignore the newline
		gets(inp);
		for (int i = 0; i < n; i++) {
			int k;
			gets(inp);
			if (strlen(inp) > 6) {
				sscanf(inp, "%s %d", type, &k);
				m+=k;
			} else {
				printf("%d\n", m);
			}
		}
	}

	return 0;
}