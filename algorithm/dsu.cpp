#include <iostream>
#include <cmath>

using namespace std;

const int N = 50;
int father[N+1];

void init() {
    for (int i = 0; i < N; ++i) {
        father[i] = i;
    }
}

int find(int node) {
    if (father[node] != node) {
        father[node] = find(father[node]);
    }
    return father[node];
}

void unite(int A, int B) {
    int rootA = find(A);
    int rootB = find(B);
    if (rand() % 2) {
        father[rootB] = rootA;
    } else {
        father[rootA] = rootB;
    }
}

int main() {
    init();

    for (int i = 0; i <= 6; ++i) {
        cout << "Root of " << i << ": " << find(i) << endl;
    }

    unite(0, 1);
    unite(3, 4);
    unite(5, 6);

    unite(0, 6);
    unite(1, 4);
    unite(4, 2);

    for (int i = 0; i <= 6; ++i) {
        cout << "Root of " << i << ": " << find(i) << endl;
    }

    return 0;
}

