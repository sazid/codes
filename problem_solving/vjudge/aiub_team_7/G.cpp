#include <bits/stdc++.h>
#define mx 100006
using namespace std;

typedef long long ll;

ll A, B, N;
ll max_val = numeric_limits<long long>::min();
ll arr[mx];
ll tree[4*mx];

void build(int node, int b, int e) {
    if (b == e) {
        tree[node] = arr[b];
        return;
    }

    int left = node << 1;
    int right = node << 1 | 1;
    int mid = (b + e) >> 1;

    build(left, b, mid);
    build(right, mid+1, e);
    tree[node] = tree[left] + tree[right];
    max_val = max( (ll) max_val, (ll) (A*tree[node] + B) );
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> A >> B;
    for (ll i = 1; i <= N; i++) cin >> arr[i];

    build(1, 1, N);
    cout << max_val << endl;

    return 0;
}

