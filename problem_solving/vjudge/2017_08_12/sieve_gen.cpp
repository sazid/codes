#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int nums[100000];

void sieve_primes(ll n) {
  for (ll i = 2; i < n; i++) {
    if (nums[i] == 0) {
      ll upto = n/i;
      for (ll k = 2; k <= upto; k++) {
        nums[k*i] = 1;
      }
    }
  }
}

int main() {
  sieve_primes(100000);
  for (ll i = 0; i < 100000; i++) {
    cout << nums[i] << ", ";
  }
  cout << endl;
  
  return 0;
}