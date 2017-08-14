#include <bits/stdc++.h>
using namespace std;

string bin = "";
template <typename T> string toStr(T tmp)
{
    ostringstream out;
    out << tmp;
    return out.str();
}

void binary(int n) {
	int r;
	if (n <= 1) {
		bin += toStr(n);
		return;
	}

	r = n%2;
	binary(n/2);
	bin += toStr(r);
}

int main() {
  int T, i=1;
  cin >> T;
  while(T-- > 0) {
    string comp = "";
    int a, b, c, d;
    string binary_form;
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);
    cin >> binary_form;
    
    bin = "";
    binary(a);
    if (bin.size() != 8) {
      bin = string(8-bin.size(), '0') + bin;
    }
    comp += bin + ".";
    
    bin = "";
    binary(b);
    if (bin.size() != 8) {
      bin = string(8-bin.size(), '0') + bin;
    }
    comp += bin + ".";
    
    bin = "";
    binary(c);
    if (bin.size() != 8) {
      bin = string(8-bin.size(), '0') + bin;
    }
    comp += bin + ".";
    
    bin = "";
    binary(d);
    if (bin.size() != 8) {
      bin = string(8-bin.size(), '0') + bin;
    }
    comp += bin;
    
    if (comp == binary_form) {
      cout << "Case " << i++ << ": Yes\n";
    } else {
      cout << "Case " << i++ << ": No\n";
    }
  }
  
  return 0;
}
