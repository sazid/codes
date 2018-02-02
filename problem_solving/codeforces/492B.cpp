#include <bits/stdc++.h>
#include <algorithm>
#define ul unsigned long
using namespace std;

int main() {
    ul n, l, i=0;
    double max_dist=0;
    cin >> n >> l;
    ul A[n];
    while(n--) cin >> A[i++];
    sort(A, A+i);
    for (ul k=1; k < i; k++) {
        max_dist = max(max_dist, double(A[k]-A[k-1]));
    }
    
    if (A[0] != 0) max_dist = max(max_dist/2.0, (double)A[0]);
    else max_dist = max_dist/2.0;
    if (A[i-1] != l) max_dist = max(max_dist, l-(double)A[i-1]);
    
    cout << fixed << setprecision(10) << max_dist << endl;
    return 0;
}
