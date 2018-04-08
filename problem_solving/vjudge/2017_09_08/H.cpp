#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    bool lucky = false;
    vector<int> lucky_nums = {
            4, 7,
            44, 47, 74, 77,
            444, 447, 474, 477, 744, 747, 774, 777
    };

    cin >> n;

    for (int i: lucky_nums) {
        if (n % i == 0) {
            lucky = true;
            break;
        }
    }

    if (lucky && n) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}