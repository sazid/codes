#include <bits/stdc++.h>
using namespace std;

int cnt[105];
int main() {
    int n, m=0, x;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> x, cnt[x]++;
    for (int j = 0; j <= 100; j++) m = max(m,cnt[j]);
    cout << m << endl;
    return 0;
}

