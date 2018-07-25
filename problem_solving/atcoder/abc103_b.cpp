#include <bits/stdc++.h>
using namespace std;

void rotate(string &s) {
  for (int i = 1; i < s.size(); i++)
    swap(s[i-1], s[i]);
}

int main() {
  string s, t;
  cin >> s >> t;
  bool f = false;
  for (int i = 0; i < s.size(); i++) {
    if (s == t) {
      f = true;
      break;
    }
    rotate(s);
  }
  if (f) cout << "Yes\n";
  else cout << "No\n";
  return 0;
}

