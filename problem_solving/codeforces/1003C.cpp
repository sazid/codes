#include <bits/stdc++.h>
using namespace std;

int arr[5005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, i, j, x;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> arr[i];
    double mx = 0;

    for (int i = 0; i <= n-k; i++) {
        double cnt = 0,sum = 0;
        for (int j = i; j < k; j++) {
            cout << arr[j] << ' ';
            sum += arr[j];
            cnt++;
        }

        cout << endl;
        mx = max(mx, sum / cnt);
    }

    cout.precision(7);
    cout << fixed << mx << endl;
    return 0;
}

