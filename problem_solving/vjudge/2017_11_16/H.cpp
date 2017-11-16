#include <bits/stdc++.h>

using namespace std;

int main() {
    long long m, n, a;

    cin >> m >> n >> a;

    long long count = m/a + (m%a > 0 ? 1 : 0);
    count *= n%a > 0 ? n/a+1 : n/a;
    cout << count << endl;

    return 0;
}
