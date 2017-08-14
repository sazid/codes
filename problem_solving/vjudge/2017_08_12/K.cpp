#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, s=0;
	cin >> n;
	s = n > 0 ? n*(n+1)/2 : 1+n*(1-n)/2;
	cout << s << "\n";

	return 0;
}