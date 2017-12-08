#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, d1, d2, d;
    while(1)
    {
        cin >> a >> b;
        if (a == -1 && b == -1) break;
        
        d1 = abs(a - b);
        d2 = a > b ? (100 - a) + b : (100 - b) + a;

        if (d1 <= d2) d = d1;
        else d = d2;
        
        cout << d << endl;
    }

    return 0;
}