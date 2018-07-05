#include <stdio.h>

int dp[50][50];

int nCr(int n, int r) {
    if (dp[n][r] != -1) return dp[n][r];
    if (r == 0) return 1;
    if (n == r) return 1;
    dp[n][r] = nCr(n-1, r) + nCr(n-1, r-1);
    return dp[n][r];
}

int main() {
    for (int i = 0; i < 50; i++) for (int j = 0; j < 50; j++) dp[i][j] = -1;
    printf("%d\n", nCr(5, 2));
    return 0;
}

