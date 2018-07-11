#include <iostream>
using namespace std;

int weight[105];
int cost[105];
int dp[105][105];
int n, CAP;

int knapsack(int i, int w) {
    // we've searched all the items
    if (i > n) return 0;

    int p1, p2;
    if (w + weight[i] <= CAP)
        p1 = cost[i] + knapsack(i + 1, w + weight[i]);
    else p1 = 0;

    p2 = knapsack(i+1, w);
    return max(p1, p2);
}

int main() {
    cin >> n >> CAP;
    for (int i = 1; i <= n; i++) cin >> weight[i] >> cost[i];
    cout << knapsack(1, 0) << endl;
    return 0;
}

