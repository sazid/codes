// AC 31ms 200kb
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	int k;
	
	cin >> s >> k;
	
	vector<int> candy_pos, flake_pos;
	
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '?') candy_pos.push_back(i);
		else if (s[i] == '*') flake_pos.push_back(i);
	}

	// case: in case no flakes or candies are present
	if (candy_pos.empty() and flake_pos.empty()) {
		if ((int)s.size() == k) {
			return cout << s, 0;
		} else return cout << "Impossible" << endl , 0;
	}
	
	// if the no. of mandatory characters is greater than k, it's impossible
	int mandatory = s.size() - 2*(flake_pos.size()+candy_pos.size());
	if (k < mandatory)
		return cout << "Impossible" << endl , 0;
		
	if (!flake_pos.empty()) {
		string temp;
		for (size_t i = 0; i < s.size(); i++) {
			if (i+1 < s.size() and ((s[i+1] == '*' and i+1 > flake_pos[0]) or (s[i+1]=='?'))) {
				++i;
			} else {
				temp += s[i];
			}
		}
		
		size_t new_pos = temp.find('*');
		
		int char_count = max(0, k - int(temp.size()) + 2);

		string r;
		for (int i = 0; i < temp.size(); ++i) {
			if (i+1 < temp.size() and temp[i+1] == '*') {
				while (char_count > 0) {
					r += temp[i];
					--char_count;
				}
			} else if (temp[i] != '*') {
				r += temp[i];
			}
		}

		return cout << r, 0;
	}
	
	if (!candy_pos.empty()) {
		int required = k - mandatory;
		
		int taken = 0;
		string r;
		
		for (int i = 0; i < s.size(); i++) {
			if (i+1 < s.size() and s[i+1]=='?') {
				if (taken < required) {
					r += s[i];
					++taken;
				}
				++i;
			} else {
				r += s[i];
			}
		}

		if (k == r.size())
			return cout << r, 0;
	}
	
	return cout << "Impossible" << endl , 0;
}
