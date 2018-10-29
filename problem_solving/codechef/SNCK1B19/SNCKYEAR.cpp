#include <bits/stdc++.h>
using namespace std;

bool hosted[2025];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int T;
	cin>> T;
	
	hosted[2010] = 1;
	hosted[2015] = 1;
	hosted[2016] = 1;
	hosted[2017] = 1;
	hosted[2019] = 1;
	
	while (T--) {
		int n;
		cin>>n;
		if (hosted[n]) cout << "HOSTED\n";
		else cout << "NOT HOSTED\n";
	}
	
	return 0;
}
