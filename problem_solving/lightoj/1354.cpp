#include <bits/stdc++.h>
using namespace std;

template <class T>
inline std::string to_string (const T& t)
{
   std::stringstream ss;
   ss << t;
   return ss.str();
}

string bin(int n) {
	string s;
	stringstream o;
	int r;
	while (n > 0) {
		r = n%2;
		s = to_string(r) + s;
		n /= 2;
	}
	if (s.size() < 8)
		s = string(8-s.size(), '0') + s;

	return s;
}

int toInt(string s) {
	int r = 0;
	int sz = s.size();

	for (int i = 0; i < sz; i++) {
		r *= 10;
		r += s[i]-'0';
	}

	return r;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s, r, p;
	int T, a, b, c, d;
	cin >> T;
	for (int i=1; i<=T; i++) {
		cin >> s;
		cin >> r;
		a = toInt(s.substr(0, s.find('.')));
		s = s.substr(s.find('.')+1, s.size());
		p = to_string(bin(a)) + ".";

		b = toInt(s.substr(0, s.find('.')));
		s = s.substr(s.find('.')+1, s.size());
		p += to_string(bin(b)) + ".";

		c = toInt(s.substr(0, s.find('.')));
		s = s.substr(s.find('.')+1, s.size());
		p += to_string(bin(c)) + ".";

		d = toInt(s);
		p += to_string(bin(d));

		cout << "Case " << i << ": ";
		if (p == r) cout << "Yes\n";
		else cout << "No\n";
	}

	return 0;
}

