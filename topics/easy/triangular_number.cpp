#include <iostream>
using namespace std;

int T(int n) { return n*(n+1)/2; }

bool is_triangular_brute_force(int n) {
    int sum = 0;
    for (int i = 1; sum < n; i++) {
        sum += i;
    }

    if (sum == n) return true;
    else return false;
}

int main(int argc, char const *argv[]) {
    cout << T(5) << endl;
    cout << (is_triangular_brute_force(T(5)) ? "true" : "false") << endl;
    cout << (is_triangular_brute_force(T(4)) ? "true" : "false") << endl;

    return 0;
}
