#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, Q, x, c=1;
	vector<int> v;
	while (scanf("%d %d", &N, &Q) and N and Q) {
		printf("CASE# %d:\n", c++);
		v.clear();
		v.reserve(N);
		while (N--) {
			scanf("%d", &x);
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		while (Q--) {
			scanf("%d", &x);
			auto lb = lower_bound(v.begin(), v.end(), x);
			if (*lb == x) printf("%d found at %d\n", x, lb-v.begin()+1);
			else printf("%d not found\n", x);
		}
	}
	return 0;
}

