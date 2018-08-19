#include <bits/stdc++.h>
using namespace std;

int N, x;
map<int, pair<int,int>> points;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	cin >> T;
	while (T--) {
		cin >> N;
		for (int i = 1; i <= N; ++i) {
			for (int j = 1; j <= N; ++j) {
				cin >> x;
				points[x] = {i, j};
			}
		}

		int sum = 0;
		
		for (int i = 2; i <= N*N; ++i) {
			sum += abs(points[i].first - points[i-1].first) + abs(points[i].second - points[i-1].second);
		}

		cout << sum << '\n';
	}

	return 0;
}

