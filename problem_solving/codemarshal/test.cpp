#include <bits/stdc++.h>
using namespace std;

auto sq(int n) {
    return n*n;
}

int main() {
    int X,Y,Z,res;
    scanf("%d %d %d",&X, &Y, &Z);

    X-=Z, Y-=Z;
    res = X + Y + Z;

    printf("%d\n", res);
    return 0;
}

