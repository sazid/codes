#include <bits/stdc++.h>

int32_t arr[100005];

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	int32_t T;
	std::cin >> T;
	
	while (T--)
	{
		//~ std::memset(arr, 0, sizeof(arr));
		
		int32_t n;
		bool f = true;
		std::cin >> n;
		
		for (int32_t i = 0; i < n; ++i)
			std::cin >> arr[i];
		
		int32_t second = -1;
		for (int32_t i = 0; i < n-1; ++i)
		{
			if (arr[i] > arr[i+1])
			{
				if (second == -1)
					second = i;
				else
				{
					f = false;
					break;
				}
			}
		}
		
		//~ std::cout << " second: " << second << '\n';
		
		if (f) std::cout << "YES\n";
		else std::cout << "NO\n";
	}
	
	return 0;
}
