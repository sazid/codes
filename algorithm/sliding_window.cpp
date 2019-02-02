#include <bits/stdc++.h>
using namespace std;

/**
 * arr - array
 * n - size of arr
 * k - number of items to pick
 */
int brute_force(int *arr, int n, int k) {
    int max_sum = INT_MIN;

    for (int i = 0; i < n-k+1; i++) {
        int sum = 0;

        for (int j = 0; j < k; j++)
            sum += arr[i+j];

        max_sum = max(max_sum, sum);
    }

    return max_sum;
}

int sliding_window(int *arr, int n, int k) {
    if (k > n) return INT_MIN;

    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];

    int sliding_sum = max_sum;
    for (int i = k; i < n; i++) {
        sliding_sum += arr[i] - arr[i-k];
        max_sum = max(max_sum, sliding_sum);
    }

    return max_sum;
}

int main() {
    const int n = 5;
    int k = 2;
    int arr[n] = {100, 200, 300, 400, 500};

    cout << brute_force(arr, n, k) << endl;
    cout << sliding_window(arr, n, k) << endl;

    return 0;
}

