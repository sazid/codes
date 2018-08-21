#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	map<string, int> mp;
	string s;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		mp[s]++;
	}

	string mx = "";
	int mx_cnt = 0;
	for (auto& el: mp) {
		if (mx_cnt < el.second) {
			mx_cnt = el.second;
			mx = el.first;
		}
	}
	
	cout << mx << endl;

	return 0;
}

