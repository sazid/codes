#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
    int n;
    cin >> n;
    f(n)
    {
        int C, d;
        double f, c;
        cin >> C >> d;
        f = (9.0/5.0)*C + 32;
        c = (5.0/9.0)*((f + d) - 32);
        c = (c / 100.0) * 100.0;
        printf("Case %d: %0.2f\n", i+1, c);
    }

    return 0;
}
