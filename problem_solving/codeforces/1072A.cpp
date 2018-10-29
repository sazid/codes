#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	long long w, h, k, res = 0;
	std::cin >> w >> h >> k;
	
	for (long long i = 1; i <= k; ++i)
	{
		long long wx = w - (4 * (i - 1));
		long long hx = h - (4 * (i - 1));
		res += (2*wx + 2*hx - 4);
	}
	
	std::cout << res;
	
	return 0;
}
