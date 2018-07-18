#include <bits/stdc++.h>
using namespace std;

int i, j, n, x, arr[1005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    int c = 0;
    for (i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (i = n; i >= 1; i--) {
        x = arr[i];
        for (j = i-1; j >= 1 and i-1 > 0; j--) {
            if (arr[i] < arr[j]) c++;
        }
    }
    cout << c << endl;

    return 0;
}

