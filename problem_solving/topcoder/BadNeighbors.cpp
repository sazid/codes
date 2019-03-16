#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

class BadNeghibors {
private:
	void maxx(int &a, int b) {
		a = max(a, b);
	}

public:
	int maxDonations(vi donations) {
		int n = donations.size();
		int dp[45];

		dp[0] = donations[0];
		for (int i = 1; i < n; ++i) {
			if (i > 1) dp[i] = donations[i] + dp[i-2];
			maxx(dp[i], dp[i-1]);
		}
		dp[0] = 0;
		for (int i = 1; i < n; ++i) {
			if (i > 1) maxx(dp[i], donations[i] + dp[i-2]);
			maxx(dp[i], dp[i-1]);
		}
		return dp[n-1];
	}
};

int main() {
	return 0;
}

