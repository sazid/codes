#include <bits/stdc++.h>
using namespace std;
 
int revn(int n) {
    int r = 0, rem;
 
    while (n > 0) {
        rem = n % 10;
        r = r*10 + rem;
        n /= 10;
    }
 
    return r;
}
 
int main() {
    ios_base::sync_with_stdio(0);
 
    int T;
    scanf("%d", &T);
    for (int cs = 1; cs <= T; cs++) {
        printf("Case %d: ", cs);
        int n;
        scanf("%d", &n);
 
        int r = revn(n);
 
        if (n == r) printf("Yes\n");
        else printf("No\n");
    }
 
    return 0;
}

