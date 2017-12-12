#include <bits/stdc++.h>
using namespace std;

int val[128] = {
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, -1, -1, -1, -1, -1
};

int nums[13107200];

void seive_primes(long long n) {
  nums[0] = nums[1] = 0;
  for (long long i = 2; i < n; i++) {
    if (nums[i] == 0) {
      long long upto = n/i;
      for (long long k = 2; k <= upto; k++) {
        nums[k*i] = 1;
      }
    }
  }
}

int main() {
  seive_primes(13107200);
  string w;
  string::size_type s;
  while (cin >> w) {
    long long sum = 0;
    s = w.length();
    for (unsigned long long i = 0; i < s; i++) {
      sum += val[w[i]];
    }
    if (nums[sum] == 0) {
      cout << "It is a prime word.\n";
    } else {
      cout << "It is not a prime word.\n";
    }
  }
  return 0;
}