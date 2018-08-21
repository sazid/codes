#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pi;
typedef unsigned long long ull;
typedef long long ll;

vector<pi> cows;

bool cp(pi &x, pi &y) {
	if (x.second == y.second)
		return x.first > y.first;
	else
		return x.second < y.second;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	ull MXTIME = 0, x, y;
	cin >> N;
	while (N--) {
		cin >> x >> y;
		cows.emplace_back(x,y);
		MXTIME = max(y, MXTIME);
	}

	sort(cows.begin(), cows.end(), cp);

	ull sz = cows.size();
	ull sum = 0;
	ull prev = 0;
	ll time, i = 0;

	for (i = 0, time = 0; i < sz and time <= MXTIME; ++time) {
		if (time < cows[i].second) {
			sum += cows[i].first;
			++i;
		} else {
			--time;
			++i;
		}
	}

	cout << sum << endl;

	return 0;
}

