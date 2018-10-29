#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	int n;
	std::cin >> n;
	
	int32_t x;
	std::cin >> x;
	
	if (x > 0)
	{
		std::cout << 1;
		return 0;
	}
	else
	{
		int32_t max = 0;
		
		for (int i = 2; i <= n; ++i)
		{
			std::cin >> x;
			if ( x-1 <= max )
			{
				max = std::max(max, x);
			}
			else
			{
				std::cout << i;
				return 0;
			}
		}
	}
	
	
	std::cout << -1;
	return 0;
}
