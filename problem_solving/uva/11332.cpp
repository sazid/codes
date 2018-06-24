#include <iostream>
using namespace std;
typedef unsigned long long ull;

ull f(ull n) {
    ull s = 0;
    while (n > 0) {
        s += (n % 10);
        n /= 10;
    }
    return s;
}

ull g(ull n) {
    while (! (n >= 0 and n <= 9) ) {
        n = f(n);
    }
    
    return n;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ull n;
    while (cin >> n) {
        if (n == 0) break;
        cout << g(n) << '\n';
    }
    
    return 0;
}
