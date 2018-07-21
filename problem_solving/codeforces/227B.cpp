#include <iostream>
using namespace std;

unsigned long long arr[100005];
unsigned long long n, m, i, x, s1=0, s2=0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> x;
        arr[x] = i;
    }

    cin >> m;
    for (i = 1; i <= m; i++) {
        cin >> x;
        s1 += arr[x];
        s2 += (n-arr[x]+1);
    }
    cout << s1 << " " << s2 << endl;

    return 0;
}

