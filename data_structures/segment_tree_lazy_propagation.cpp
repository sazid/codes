#include <bits/stdc++.h>
#define mx 100005

using namespace std;

int arr[mx];
int tree[mx*4];
int lazy[mx*4];

void build(int node, int b, int e) {
    if (b == e) {
        tree[node] = arr[b];
        return;
    }

    int left = node << 1;
    int right = node << 1 | 1;
    int mid = (b + e) >> 1;

    build(left, b, mid);
    build(right, mid + 1, e);
    tree[node] = min(tree[left], tree[right]);
}

int query(int node, int b, int e, int l, int r) {
    // out of range
    if (b > e) return INT_MAX;

    int left = node << 1;
    int right = node << 1 | 1;
    int mid = (b + e) >> 1;
    
    // make sure all propagations are done and propagate to
    // child nodes if necessary
    if (lazy[node]) {
        tree[node] += lazy[node];
        if (b != e)
            lazy[left] += lazy[node],
            lazy[right] += lazy[node];
        lazy[node] = 0;
    }

    // no overlap
    if (b > r || e < l) return INT_MAX;

    // total overlap
    if (b >= l && e <= r) return tree[node];
    
    // partial overlap
    int p1 = query(left, b, mid, l, r);
    int p2 = query(right, mid + 1, e, l, r);
    return min(p1, p2);
}

void update(int node, int b, int e, int l, int r, int val) {
    // out of range
    if (b > e) return;

    int left = node << 1;
    int right = node << 1 | 1;
    int mid = (b + e) >> 1;

    // make sure all propagations are done and propagate to
    // child nodes if necessary
    if (lazy[node]) {
        tree[node] += lazy[node];
        if (b != e)
            lazy[left] += lazy[node],
            lazy[right] += lazy[node];
        lazy[node] = 0;
    }
    
    // no overlap
    if (b > r || e < l) return;

    // total overlap
    if (b >= l && e <= r) {
        tree[node] += val;
        if (b != e)
            lazy[left] += val,
            lazy[right] += val;
        return;
    }

    // partial overlap
    update(left, b, mid, l, r, val);
    update(right, mid + 1, e, l, r, val);
    tree[node] = min(tree[left], tree[right]);
}

int main() {
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;
    arr[5] = 5;
    arr[6] = 6;

    build(1, 1, 6);
    cout << query(1, 1, 6, 1, 6) << endl;
    update(1, 1, 6, 1, 6, 3);
    cout << query(1, 1, 6, 1, 6) << endl;

    return 0;
}
