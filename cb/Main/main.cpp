#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int64_t n, m;

    std::cin >> n >> m;

    std::cout << std::min((int64_t)0, n - 2*m) << ' ';

    int64_t k = 0;
    while (k * (k-1) / 2 < m) ++k;

    std::cout << n - k;

    return 0;
}
