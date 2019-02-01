#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i < b; ++i)
using namespace std;
using ll = long long;

int n, a=0,b=0,s=0;

void read() {
	cin >> n;
}

void solve() {
	if (n == 1) {
		cout << 1;
		return;
	}

	cout << abs(a-b) << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    read();
    solve();

    return 0;
}
