#include <bits/stdc++.h>
using namespace std;

vector<int> rabin_karp(string const& s, string const& t) {
	const int p = 131;
	const int m = 1e9 + 9;
	int S = s.size(), T = t.size();

	vector<long long> p_pow(max(S, T));
	p_pow[0] = 1;
	for (int i = 1; i < (int)p_pow.size(); ++i)
		p_pow[i] = (p_pow[i-1] * p) % m;

	vector<long long> h(T + 1, 0);
	for (int i = 0; i < T; ++i)
		h[i+1] = (h[i] + t[i] * p_pow[i]) % m;
	
	long long h_s = 0;
	for (int i = 0; i < S; ++i)
		h_s = (h_s + s[i] * p_pow[i]) % m;
	
	vector<int> occurences;
	for (int i = 0; i + S - 1 < T; ++i) {
		long long cur_h = (h[i + S] + m - h[i]) % m;
		if (cur_h == h_s * p_pow[i] % m)
			occurences.push_back(i);
	}

	return occurences;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;

	string s, t;
	while (T--) {
		cin>>t>>s;
		vector<int> pos = rabin_karp(s, t);
		if (pos.empty())
			cout << "Not Found\n";
		else {
			cout << pos.size() << '\n';
			for (int i : pos) cout << i+1 << ' ';
			cout << "\n";
		}
	}

	return 0;
}

