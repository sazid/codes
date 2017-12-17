// http://codeforces.com/problemset/problem/158/A
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> scores;
	int n, k, a, c=0;
	cin >> n >> k;
	while (n--) {
		cin >> a;
		scores.push_back(a);
	}
	for (int i : scores) {
		if (i >= scores[k-1] && i > 0) {
			c++;
		}
	}
	cout << c << endl;
	return 0;
}
