#include <bits/stdc++.h>
using namespace std;

vector<int> v(10010, -1);

int a, b, c, d, e, f;
int fn( int n ) {
    if( n == 0 ) {
        v[n] = a;
        return a;
    }
    if( n == 1 ) {
        v[n] = b;
        return b;
    }
    if( n == 2 ) {
        v[n] = c;
        return c;
    }
    if( n == 3 ) {
        v[n] = d;
        return d;
    }
    if( n == 4 ) {
        v[n] = e;
        return e;
    }
    if( n == 5 ) {
        v[n] = f;
        return f;
    }
    
    if (v[n-1] == -1) v[n-1] = fn(n-1);
    if (v[n-2] == -1) v[n-2] = fn(n-2);
    if (v[n-3] == -1) v[n-3] = fn(n-3);
    if (v[n-4] == -1) v[n-4] = fn(n-4);
    if (v[n-5] == -1) v[n-5] = fn(n-5);
    if (v[n-6] == -1) v[n-6] = fn(n-6);
    return( v[n-1] + v[n-2] + v[n-3] + v[n-4] + v[n-5] + v[n-6] ) % 10000007;
}

int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %d\n", ++caseno, fn(n));
    }
    return 0;
}
