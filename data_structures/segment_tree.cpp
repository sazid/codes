#include <bits/stdc++.h>

#define rep(i, a, b) for ((i)=(a); (i) < (b); (i)++)
#define reps(i, a, b, s) for ((i)=(a); (i) < (b); (i)+=(s))
#define repe(i, a, b) for ((i)=(a); (i) <= (b); (i)++)
#define MOD(n, M) ((((n) % (M)) + (M)) % (M))
#define PB push_back
#define EB emplace_back
#define F first
#define S second
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
int tree[mx * 3];

inline int merge(int a, int b) {
    // return a > b or a < b based on type of segment
    // tree required
    return a + b;
}

void init(int node, int b, int e) {
    if (b == e) {
        tree[node] = arr[b];
        return;
    }

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = b + (e - b) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);

    tree[node] = merge(tree[Left], tree[Right]);
}

int query(int node, int b, int e, int i, int j) {
    if (i > e || j < b) return 0;
    if (b >= i && e <= j) return tree[node];

    int Left = 2 * node;
    int Right = 2 * node + 1;
    int mid = b + (e - b) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return merge(p1, p2);
}

void update(int node, int b, int e, int i, int newvalue) {
    if (i > e || i < b)
        return;
    if (b == i && e == i) {
        tree[node] = newvalue;
        return;
    }

    int Left = 2 * node;
    int Right = 2 * node + 1;
    int mid = b + (e - b) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = merge(tree[Left], tree[Right]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int i;
    repe(i, 1, n) cin >> arr[i];
    init(1, 1, n);
    cout << query(1, 1, n, 1, 4) << endl;

    update(1, 1, n, 2, 0);
    cout << query(1, 1, n, 1, 4) << endl;

    return 0;
}
