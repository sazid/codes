#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll nums[1000010];
ll C[1000010];

ll sum_digits(ll n) {
  ll s=0;
  while (n > 0) {
    s += n % 10;  
    n/=10;
  }
  return s;
}

void sieve_primes(ll n) {
  int count = 0;
  for (ll i = 2; i < n; i++) {
    if (nums[i] == 0) {
      ll upto = n/i;
      if (nums[sum_digits(i)] == 0) {
        count++;
      }
      for (ll k = 2; k <= upto; k++) {
        nums[k*i] = 1;
      }
    }
    C[i] = count;
  }
  C[0] = 0;
  C[1] = 0;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  sieve_primes(1000010);

  ll N, start, end, count, s;
  cin >> N;
  while (N-- > 0) {
    count = 0;
    cin >> start >> end;
    if (start > 0) start--;
    cout << C[end] - C[start] << "\n";
  }
  
  return 0;
}