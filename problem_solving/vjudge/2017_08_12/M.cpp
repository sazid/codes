#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int nums[10000];
int primes[1500];

void seive_primes(ll n) {
  int j = 1;
  primes[0] = 1;
  primes[1] = 2;
  for (ll i = 2; i < n; i++) {
    if (nums[i] == 0) {
      primes[j++] = i;
      ll upto = n/i;
      for (ll k = 2; k <= upto; k++) {
        nums[k*i] = 1;
      }
    }
  }
}

void print_prime_range(ll N, ll C) {
  ll n=N, mid, range, start, end;
  for (ll i = 0; i < 1500; i++) {
    if (primes[i] <= N && primes[i+1] >= N) {
      n = i;
    }
  }
  
  mid = n/2;
  if (C >= mid) {
    start = 0;
    end = n;
  } else {
    if (N % 2 == 0) {
      start = mid - C + 1;
      end = mid + C;
    } else {
      range = (2*C - 1)/2;
      start = mid - range;
      end = mid + range;
    }
  }
  
  for (ll i = start; i <= end; i++) {
    cout << " " << primes[i];
  }
}

int main() {
  seive_primes(10000);
  ll N, C;

  while(scanf("%lld %lld", &N, &C) != EOF) {
    cout << N << " " << C << ":";
    print_prime_range(N, C);
    cout << "\n\n";
  }
  
  return 0;
}