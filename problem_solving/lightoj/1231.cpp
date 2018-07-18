#include <bits/stdc++.h>
using namespace std;

int A[55], C[55], K[1005];
int dp[55][1005];
int n;

int f(int i, int amount) {
    if (i >= n) {
        if (amount == 0) return 1;
        else return 0;
    }
    
    int r1 = 0, r2 = 0;
    if (amount - A[i] >= 0) {
        for (int x = 0; x < C[i]; x++)
            r1 += f(i, amount - A[i]);
    }
    r2 = f(i+1, amount);
    
    int x = r1 + r2;
    return x;
}

int main() {
    int T, K;
    scanf("%d", &T);
    for (int case_ = 1; case_ <= T; case_++) {
        scanf("%d %d", &n, &K);
        for (int i = 0; i < n; i++) scanf("%d", &A[i]);
        for (int i = 0; i < n; i++) scanf("%d", &C[i]);
        memset(dp, -1, sizeof(dp));
        printf("Case %d: %d\n", case_, f(0, K) % 100000007);
    }

    return 0;
}

