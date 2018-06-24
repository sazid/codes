#include <bits/stdc++.h>

#define repe(i, a, b) for ((i)=(a); (i) <= (b); (i)++)
#define NL "\n"
#define mx 100005
#define merge(a, b) min((a), (b))

using namespace std;


int arr[mx];
int tree[3 * mx];

void init(int node, int b, int e) {
    if (b == e) {
        tree[node] = arr[b];
        return;
    }

    int Left = 2 * node;
    int Right = 2 * node + 1;
    int mid = b + (e - b) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = merge(tree[Left], tree[Right]);
}

int query(int node, int b, int e, int l, int r) {
    if (b > r || e < l) return INT_MAX;
    if (b >= l && e <= r) return tree[node];

    int Left = 2 * node;
    int Right = 2 * node + 1;
    int mid = b + (e - b) / 2;
    int p1 = query(Left, b, mid, l, r);
    int p2 = query(Right, mid + 1, e, l, r);
    return merge(p1, p2);
}

void update(int node, int b, int e, int i, int val) {
    if (i > e || i < b) return;
    if (b == i && e == i) {
        tree[node] = val;
        return;
    }

    int Left = 2 * node;
    int Right = 2 * node + 1;
    int mid = b + (e - b) / 2;
    update(Left, b, mid, i, val);
    update(Right, mid + 1, e, i, val);
    tree[node] = merge(tree[Left], tree[Right]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T, cs, x, N, q, i, j;
    cin >> T;
    repe(cs, 1, T) {
        cout << "Case " << cs << ":\n";

        cin >> N >> q;
        repe(x, 1, N) cin >> arr[x];
        init(1, 1, N);
        while (q--) {
            cin >> i >> j;
            cout << query(1, 1, N, i, j) << NL;
        }
    }

    return 0;
}
