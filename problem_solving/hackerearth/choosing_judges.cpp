// https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/choosing-the-judges-7/description/

#include <bits/stdc++.h>
using namespace std;

int arr[10005];
int dp[10005];
int T, size;

int f(int n) {
    if (dp[n] != -1) return dp[n];
    if (n >= size) return 0;

    int p = arr[n] + f(n+2);
    int q = f(n+1);
    dp[n] = max(p, q);
    return dp[n];
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    cin >> T;
    for (int cs = 1; cs <= T; cs++) {
        cout << "Case " << cs << ": ";
        cin >> size;
        for (int i = 0; i < 10005; i++) {
            dp[i] = -1;
            if (i < size) cin >> arr[i];
        }
        cout << f(0) << endl;
    }

    return 0;
}

