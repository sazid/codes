#include <bits/stdc++.h>
using namespace std;

long arr[1005], n, i;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (i = 1; i <= n; i++) {
        long r = 1, x = arr[i];
        if (x & 1) r = x+1;
        else r = x-1;

        

        arr[i] = r;
    }
    for (i = 1; i <= n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}

