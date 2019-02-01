#include <bits/stdc++.h>
using namespace std;

const int N = 20000005;
bitset<N> nums;
int pairs[N];

void sieve() {
	nums[0] = 1;
	nums[1] = 1;
	nums[2] = 0;
	
	int pair_index = 1;
	
	for (int i = 4; i < N; i += 2) nums[i] = 1;
	
	for (int i = 3; i < N; i += 2) {
		if (!nums[i]) for (int j = i+i; j < N; j += (i))
			nums[j] = 1;
	}
	
	for (int i = 3; i < N; i += 2) {
		if (!nums[i] && !nums[i+2]) {
			pairs[pair_index++] = i;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	sieve();
	
	int n;
	while (cin >> n)
		cout << '(' << pairs[n] << ", " << pairs[n]+2 << ")\n";
	
	return 0;
}
