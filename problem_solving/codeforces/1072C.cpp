#include <bits/stdc++.h>
using namespace std;

void print_set(vector<int> &v) {
	cout << v.size() << '\n';
	for (auto i : v) cout << i << ' ';
	cout << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a, b;
	cin >> a >> b;
	
	int s = a + b;
	int used = 0; // used hours
	int k = 1; // current book
	
	while (used + k <= s) {
		used += k;
		++k;
	}
	--k;
	
	vector<int> va, vb;
	for (int i = k; i >= 1; --i) {
		if (i <= a) {
			va.push_back(i);
			a -= i;
		} else {
			assert(b >= i);
			vb.push_back(i);
			b -= i;
		}
	}
	
	print_set(va);
	print_set(vb);
	
	return 0;
}

// 1 2 3 4

// 1 2 3 4 5 6 7

// 3+3=6 (total hours to read the books)
// k = how many books can be read in these 6 (total) hours

// book 'k' can be read in k hours
// no of books needs to be maximised for each day
