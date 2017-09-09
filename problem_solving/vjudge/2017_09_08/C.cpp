#include <bits/stdc++.h>
#define PB push_back
using namespace std;

typedef unsigned long ul;

bitset<5*1000001> primes;
pair <bool, vector <unsigned long> > NUM[5*1000001];

void seive_primes(ul n) {
  NUM[0].first = 1;
  NUM[1].first = 1;

  for (ul i=2; i < n; i++) {
    if (NUM[i].first == 0) {
      NUM[i].second.PB(i);

      for (ul p=i+i; p < n; p+=i) {
        NUM[p].first = 1;
        NUM[p].second.PB(i);
      }
    }
  }
}

ul score(ul n) {
  ul x=n;
  for (ul i=0; i < NUM[n].second.size(); i++) {
    x *= 1.0 - (1.0/NUM[n].second[i]);
  }

  return x*x;
}

void calculate_scores(ul n) {
  for (ul i = 1; i <= n; i++) {
    NUM[i].second.PB( NUM[i-1].second.back() + score(i) );
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  seive_primes(5*1000001);
  calculate_scores(5*1000001);

  unsigned long T, i=1, a, b;
  cin >> T;
  while (T-- > 0) {
    cin >> a >> b;
    cout << "Case " << i++ << ": " << (NUM[b].second.back() - NUM[a-1].second.back()) << endl; 
  }
  
  return 0;
}