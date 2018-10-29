#include <bits/stdc++.h>

#define rep(i, a, b) for ((i)=(a); (i) < (b); (i)++)
#define reps(i, a, b, s) for ((i)=(a); (i) < (b); (i)+=(s))
#define repe(i, a, b) for ((i)=(a); (i) <= (b); (i)++)
#define mod(n, M) ((((n) % (M)) + (M)) % (M))
#define pb push_back
#define MP make_pair
#define ff first
#define ss second
#define PI acos(-1)
#define prnt(arr) for (auto i : (arr)) cout << i << " "; cout << endl;
#define eps 1e-11
#define len(x) x.size()
#define FIN freopen("input.txt", "r", stdin);
#define FOUT freopen("output.txt", "w", stdout);
#define nl "\n"

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

// double max = numer_limits<double>::max()
// double INFINITY = numeric_limits<double>::infinity();

struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return left.second < right.second;
    }
};

pair<ull, ull> times[100005];
pair<ull, ull> reverse_times[100005];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ull T, cs;
	cin >> T;
	rep(cs, 0, T) {

		cout << "Case " << cs+1 << ": ";


		ull N, P;
		cin >> N >> P;


		ull i, k, j, x, y;
		rep(i, 0, N) {
			cin >> x >> y;
			times[i] = MP(x, y);
			reverse_times[i] = MP(x, y);
		}

		sort(times, times+N, sort_pred());
		sort(reverse_times, reverse_times+N, sort_pred());

		ull entry;
		ull exit;
		ull minimum_time = numeric_limits<ull>::max();

		rep(i, 0, N-P+1) {

			entry = times[i].second;
			// exit = times[i].second;

			sort(reverse_times + i+1, reverse_times + N);

			exit = reverse_times[i+P-1].first;

			if (exit < entry) exit = entry;

			if (minimum_time > exit-entry) {
				minimum_time = exit-entry;
			}

			sort(reverse_times + i+1, reverse_times + N, sort_pred());

		}

		cout << minimum_time << '\n';

	}

	return 0;
}
