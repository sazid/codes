#include <bits/stdc++.h>

#define rep(i, a, b) for ((i)=(a); (i) < (b); (i)++)
#define reps(i, a, b, s) for ((i)=(a); (i) < (b); (i)+=(s))
#define repe(i, a, b) for ((i)=(a); (i) <= (b); (i)++)
#define MOD(n, M) ((((n) % (M)) + (M)) % (M))
#define PB push_back
#define EB emplace_back
#define ff first
#define ss second
#define PI acos(-1)
#define PRNT(arr) for (auto i : (arr)) cout << i << " "; cout << endl;
#define eps 1e-11
#define len(x) x.size()
#define NL "\n"
#define mx 100001

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

// double max = numer_limits<double>::max()
// double INFINITY = numeric_limits<double>::infinity();

int arr[mx];
int min_tree[mx * 4];
int max_tree[mx * 4];

void build(int node, int b, int e) {
    if (b == e) {
        max_tree[node] = arr[b];
        min_tree[node] = arr[b];
        return;
    }

    int left = node << 1;
    int right = node << 1 | 1;
    int mid = (b + e) >> 1;

    build(left, b, mid);
    build(right, mid + 1, e);
    max_tree[node] = max(max_tree[left], max_tree[right]);
    min_tree[node] = min(min_tree[left], min_tree[right]);
}

// pair<int, int>
// first - min
// second - max
ii query(int node, int b, int e, int i, int j) {
    if (i > e || j < b) return make_pair(INT_MAX, 0);
    if (b >= i && e <= j) return make_pair(min_tree[node], max_tree[node]);

    int left = node << 1;
    int right = node << 1 | 1;
    int mid = (b + e) >> 1;

    ii p1 = query(left, b, mid, i, j);
    ii p2 = query(right, mid + 1, e, i, j);
    return make_pair(min(p1.ff, p2.ff), max(p1.ss, p2.ss));
}

int main() {
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    int T, cs=1, n, d, x, i;
    cin >> T;
    while (T--) {
        printf("Case %d: ", cs++);

        cin >> n >> d;
        repe(i, 1, n) cin >> arr[i];
        build(1, 1, n);

        int m = 0;
        repe(i, 1, n-d+1) {
            ii r = query(1, 1, n, i, i+d-1);
            m = max(m, r.ss-r.ff);
        }
        printf("%d\n", m);
    }

    return 0;
}
