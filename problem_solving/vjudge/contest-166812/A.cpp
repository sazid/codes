#include <bits/stdc++.h>
#include <algorithm>
#define f(n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0) break;

        int x[n];
        f(n)
        {
            scanf("%d", &x[i]);
        }

        std::sort(x, x + n);
        f(n)
        {
            if (i == n-1) printf("%d\n", x[i]);
            else printf("%d ", x[i]);
        }
    }

    return 0;
}