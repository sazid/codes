#include <bits/stdc++.h>

#define rep(T, i, a, b) for (T (i)=(a); (i) < (b); (i)++)
#define repe(T, i, a, b) for (T (i)=(a); (i) <= (b); (i)++)
#define MOD(n, M) ((((n) % (M)) + (M)) % (M))
#define PB push_back
#define F first
#define S second
#define PI acos(-1)
#define PRNT(arr) for (auto i : (arr)) cout << i << " "; cout << endl;

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

struct item
{
	string name;
	std::vector<string> words;
	int count = 0;
};

bool cmp(item &a, item &b) {
	if (a.count > b.count) return true;
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	int N, W;
	std::vector<item> items;
	
	cin >> N;

	while (N--) {
		cin >> s >> W;
		item t;
		t.name = s;
		while (W--) {
			cin >> s;
			t.words.PB(s);
		}
		items.PB(t);
	}

	while (cin >> s) {
		for (auto iter = items.begin(); iter != items.end(); iter++) {
			item t = *iter;
			for (string p : t.words) {
				if (p == s) {
					t.count++;
					break;
				}
			}
			*iter = t;
		}
	}

	sort(items.begin(), items.end(), cmp);
	// for (item t : items) {
	// 	cout << t.name << ": " << t.count << endl;
	// }
	int i = 0;
	int count;
	do {
		cout << items[i].name << "\n";
		count = items[i].count;
		i++;
	} while (items[i].count == count);

	return 0;
}
