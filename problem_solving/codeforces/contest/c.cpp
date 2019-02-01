#include <bits/stdc++.h>
using namespace std;

vector<int> toBin(int n) {
	vector<int> vec(32);
	
	int i = 0;
	while (n > 0) {
		vec[i++] = n % 2;
		n /= 2;
	}
	
	return vec;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	
	if (n == k) {
		cout << "YES\n";
		for (int i = 0; i < k; ++i)
			cout << 1 << ' ';
		return 0;
	}
	//~ else if (k == 1 and n > 1 && ceil(log2(n)) != floor(log2(n))) {
		//~ cout << "NO\n";
		//~ return 0;
	//~ }
	else if (k > n) {
		cout << "NO\n";
		return 0;
	}
	
	vector<int> bin = toBin(n);
	
	
	
	return 0;
}
