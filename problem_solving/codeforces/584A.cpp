#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	int n, t;
	std::cin >> n >> t;
	
	if (n == 1 and t > 9) std::cout << -1;
	else if (t == 10)
	{
		std::cout << 1;
		for (int i = 0; i < n-1; ++i) std::cout << 0;
	}
	else
	{
		for (int i = 0; i < n; ++i) std::cout << t;
	}

	return 0;
}
