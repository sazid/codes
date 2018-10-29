#include <iostream>
using namespace std;

int main() {
    const int n = 4;
    int k = 2;
    int max_sum = 0;
    int arr[n] = {100, 200, 300, 400};

    for (int i = 0; i < n-k+1; i++) {
        int sum = 0;
        for (int j = 0; j < k; j++) {
            sum += arr[i+j];
        }
        max_sum = max(max_sum, sum);
    }

    cout << max_sum << endl;

    return 0;
}

