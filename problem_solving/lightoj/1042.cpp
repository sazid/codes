#include <bits/stdc++.h>
using namespace std;

typedef long long ui;

string to_bin(ui n) {
  string s;

  while (n > 0) {
    s += (n%2 + '0');
    n /= 2;
  }

  s = s + '0';
  return s;
}

ui to_int(string s) {
  ui n = 0, c = 0, i;
  ui sz = s.size();

  for (int i = 0; i < sz; ++i) {
    n += ( (s[i]-'0') * (1 << c++) );
  }

  return n;
}

bool cmp(char a, char b) {
  return a > b;
}

ui onoroy(string s) {
  ui i, k, sz = s.size();
  
  for (i = 1; i < sz; ++i) {
    if (s[i] == '0' && s[i-1] == '1') {
      swap(s[i], s[i-1]);

      if (s[i-2] == '1') {
        sort(s.begin(), s.begin()+i-1, cmp);
      }

      break;
    }
  }

  return to_int(s);
}

int main(int argc, char const *argv[])
{
  int T, cs;
  ui n;

  scanf("%d", &T);

  for (cs = 1; cs <= T; ++cs) {
    scanf("%lld", &n);
    string s = to_bin(n);
    printf("Case %d: %lld\n", cs, onoroy(s));
  }

  return 0;
}
