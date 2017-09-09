#include <bits/stdc++.h>
using namespace std;

typedef unsigned long ul;
short nums[200000000];
pair<ul, ul> pairs[10000000];
ul pair_count=0;

void sieve_primes(ul n) {
  for (ul i = 4; i*i <= n; i+=2) nums[i]=1;
  for (ul i = 3; i*i <= n; i+=2) {
    if (!nums[i]) {
      for (ul k = i*i; k <= n; k+=(i+i)) {
        nums[k] = 1;
      }
    }
  }
  nums[0] = 1;
  nums[1] = 1;
}

void calculate_pairs(ul n) {
  pairs[0] = {2, 3};
  ul pc=1;
  for (ul i=2; i <= n; i++) {
    if (!nums[i] && !nums[i+2]) {
      if (i%2 == 0 || (i+2)%2==0) continue;
      pairs[pc++] = {i, i+2};
    }
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  sieve_primes(200000000);
  calculate_pairs(200000000);

  ul n;
  while (cin >> n) {
    cout << "(" << pairs[n].first << ", " << pairs[n].second << ")" << "\n";
  }

  return 0;
}