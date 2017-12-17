#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, b, a[5] = {0, 0, 0, 0, 0};
    cin >> n;
    while (n--) {
        cin >> b;
        a[b]++;
    }
    
    if (a[3] > 0 && a[1] > 0) {
        long long x = min(a[3], a[1]);

        a[3] = a[3] - x;
        a[1] = a[1] - x; 
        a[4] = a[4] + x;
    } else if (a[3] > 0) {
        a[4]++;
        a[3]--;
    }
    
    a[4] = a[4] + a[3];
    a[3] = 0;
    
    a[4] = a[4] + a[2]/2;
    a[2] = a[2] % 2;
    
    a[4] = a[4] + a[1]/4;
    a[1] = a[1] % 4;
    
    if (a[2] > 0 && a[1] >= 2) {
        a[4]++;
        a[2]--;
        a[1] = a[1] - 2;
        
        a[4] = a[4] + a[1];
        a[1] = 0;
    } else if (a[2] > 0 && a[1] == 0) {
        a[4]++;
    } else if (a[2] == 0 && a[1] != 0) {
        a[4]++;
    } else if (a[2] != 0 && a[1] != 0) {
        a[4]++;
        a[2]--;
        a[1] = a[1] - 2;
    }

    cout << a[4] << endl;
    
    return 0;
}