#include <bits/stdc++.h>
using namespace std;

// 0 - prime
// 1 - not prime
int nums[64*1024];

void seive_primes(int n) {
  nums[0] = nums[1] = 0;
  for (int i = 2; i <= n; i++) {
    if (nums[i] == 0) {
      int upto = n/i;
      for (int k = 2; k <= upto; k++) {
        nums[k*i] = 1;
      }
    }
  }
}

int main() {
  seive_primes(10000);
  for (int i = 0; i <= 10000; i++) {
    if (nums[i] == 0) {
      cout << i << " is prime\n";
    }
  }
  return 0;
}