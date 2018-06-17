
#include <iostream>
#include <cmath>

#define MAX_SIZE 100005

using namespace std;

int *allocTree(int length) {
    int *tree = new int[4*length];
    return tree;
}

void buildST(int node, int start, int end, int *tree, int *A) {
    if (start == end)
        tree[node] = A[start];
    else {
        int mid = start + ( (end-start) >> 1 );
        buildST(2*node, start, mid, tree, A);
        buildST(2*node+1, mid+1, end, tree, A);
        tree[node] = min(tree[2*node], tree[2*node+1]);
    }
}

void updateST(int node, int start, int end, int val, int idx, int *tree, int *A) {
    if (start == end) {
        A[idx] = val;
        tree[node] = A[idx];
    } else {
        int mid = start + ( (end-start) >> 1 );
        
        if (start <= idx && idx <= mid) {
            updateST(2*node, start, mid, val, idx, tree, A);
        } else {
            updateST(2*node+1, mid+1, end, val, idx, tree, A);
        }
        
        tree[node] = min(tree[2*node], tree[2*node+1]);
    }
}

int queryST(int node, int start, int end, int l, int r, int *tree, int *A) {
    // 1. if range is outside, return 0
    if (r < start or end < l) {
        return 0;
    }
    
    // 2. if range is completely within, return the value of node
    if (l <= start and end <= r) {
        return tree[node];
    }
    
    // 3. if range is partial, return sum of child nodes
    int mid = start + ( (end-start) >> 1 );
    return min(
        queryST(2*node, start, mid, l, r, tree, A),
        queryST(2*node+1, mid+1, end, l, r, tree, A)
    );
}

int main() {
    
    int N, Q, c, x, y;
    cin >> N >> Q;
    
    int A[N+10];
    
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    
    int *tree = allocTree(N+10);
    buildST(1, 1, N, tree, A);
    
    while(Q--) {
        cin >> c >> x >> y;
        if (c == 'q') cout << queryST(1, 1, N, x, y, tree, A) << '\n';
        else updateST(1, 1, N, y, x, tree, A);
    }
    
    
    delete[] tree;
    return 0;
}
