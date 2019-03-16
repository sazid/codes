#include <bits/stdc++.h>
using namespace std;

const int p = 131;
const int m = 1e9+9;
int T;
int n;
string s, t;
vector<long long> h;
vector<long long> p_pow(100005);

bool rabin_karp() {
	const int S = s.size();

	// hash for pattern s
	long long h_s = 0;
	for (int i = 0; i < S; ++i)
		h_s = (h_s + s[i] * p_pow[i]) % m;

	// search for pattern s in string t
	for (int i = 0; i + S - 1 < T; ++i) {
		long long cur_h = (h[i+S] + m - h[i]) % m;
		if (cur_h == h_s * p_pow[i] % m)
			return true;
	}

	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// precalculate powers (mod m)
	p_pow[0] = 1;
	for (int i = 1; i < 100005; ++i)
		p_pow[i] = (p_pow[i-1] * p) % m;

	cin >> t >> n;
	T = t.size();

	// generate hash for string t
	h = vector<long long>(T + 1, 0);
	for (int i = 0; i < T; ++i)
		h[i+1] = (h[i] + t[i] * p_pow[i]) %m;

	while (n--) {
		cin >> s;
		cout << (rabin_karp() ? 'Y' : 'N') << '\n';
	}

	return 0;
}

