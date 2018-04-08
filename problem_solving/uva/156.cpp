#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> vec, vec2;
	string s, a, b;

	while (cin >> s && s != "#") {
		vec.push_back(s);
	}

	sort(vec.begin(), vec.end());

	for (auto s : vec) {
		auto sz = s.size();
		for (int i = 0; i < sz; i++) {
			s[i] = tolower(s[i]);
		}
		sort(s.begin(), s.end());
		vec2.push_back(s);
	}

	auto sz = vec.size();
	for (int i = 0; i < sz; i++) {
		a = vec2[i];
		bool f = false;
		for (int j = 0; j < sz; j++) {
			f = false;
			if (i != j && a == vec2[j]) {
				f = true;
				break;
			}
		}
		if (!f) cout << vec[i] << "\n";
	}

	return 0;
}

