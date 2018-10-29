#include <iostream>
using namespace std;

bool is_distinct(int n) {
    int a[10] = {0};
    int r;
    while (n > 0) {
        r = n%10;
        n /= 10;
        a[r]++;
    }

    for (auto i : a) {
        if (i > 1) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = n+1; ; i++) {
        if (is_distinct(i)) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}
