#include <bits/stdc++.h>

using namespace std;

int arr[500005];
int visited[1000005];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) cin >> arr[i];

    int l = 1;
    int r = 1;
    int max_l = l;
    int max_r = r;
    int distinct = 1;
    visited[arr[r]] = 1;

    while (r <= n) {
        if (distinct <= k) {
            r++;
            if (visited[arr[r]] == 0)
                distinct++;
            visited[arr[r]]++;

            if (max_r - max_l < r - 1 - l) {
                max_l = l;
                max_r = r - 1;
            }
        } else {
            visited[arr[l]]--;
            if (visited[arr[l]] == 0)
                distinct--;
            l++;
        }
    }

    cout << max_l << ' ' << max_r << '\n';

    return 0;
}

