#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string s, t;
	cin >> n >> s >> t;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		// loop over string s to find matches with t
		if (s[i] == t[i]) continue;

		bool found = false;
		int j;
		for (j = i+1; j < n; j++) {
			if (t[i] == s[j]) {
				found = true;
				break;
			}
		}

        if (!found) break;
        int diff = j-i;
		for (int p = 0; p < diff; p++) {
			v.push_back(j);
			swap(s[j], s[j-1]);
			j--;
		}
	}

	//cout << s << endl;
	//cout << t << endl;

	// print the result
	if (v.empty() or s != t) cout << -1 << endl;
	else {
		cout << v.size() << endl;
		for (int i: v)
			cout << i << ' ';
		cout << endl;
	}

	return 0;
}


