#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long n, c=0, sum=0;
    cin >> n;
    for (long i = 2; sum < n; i++) {
        long x = ((i*(i-1))/2);
        sum += x;
        c++;
    }
    if (n == 1) cout << 1 << endl;
    else cout << --c << endl;

    return 0;
}

