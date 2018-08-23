#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pi;
typedef unsigned long long ull;
typedef long long ll;

vector<pi> cows;

int slots[100005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
    ull x, y, sum = 0;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> x >> y;
		cows.emplace_back(x, y);
	}

	sort(cows.rbegin(), cows.rend());

    for (int i = 0; i < N; ++i) {
        int profit = cows[i].first;
        int deadline = cows[i].second;

        for (int j = deadline; j > 0; --j) {
            if (slots[j] == 0) {
                slots[j] = profit;
                sum += profit;
                break;
            }
        }
    }

    cout << sum << endl;

	return 0;
}

