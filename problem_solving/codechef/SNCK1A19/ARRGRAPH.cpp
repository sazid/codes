#include <bits/stdc++.h>

bool coprimes[55][55];
int count[55];
int arr[55];

void gen_coprimes()
{
	for (int i = 2; i <= 50; ++i)
	{
		for (int j = 2; j <= 50; ++j)
		{
			if (std::__gcd(i, j) == 1)
			{
				coprimes[i][j] = true;
			}
		}
	}
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	gen_coprimes();
	
	int T;
	std::cin >> T;
	
	while (T--)
	{
		int n;
		std::cin >> n;
		
		// input
		for (int i = 0; i < n; ++i) std::cin >> arr[i];
		
		// the node, which contains the highest number of co-primes
		int root = 0;
		int highest_count = 0;
		
		// find the root containing highest number of co-primes
		for (int i = 0; i < n; ++i)
		{
			int cnt = 0;
			
			for (int j = 0; j < n; ++j)
			{
				//~ std::cout << arr[i] << ' ' << arr[j] << std::endl;
				if (coprimes[arr[i]][arr[j]]) ++cnt;
			}
			
			if (cnt > highest_count)
			{
				highest_count = cnt;
				root = i;
			}
		}
		
		// find a coprime of 'root'
		int cop = 2;
		for (int i = 2; i <= 50; ++i)
		{
			if (coprimes[arr[root]][i])
			{
				cop = i;
				break;
			}
		}
		//~ std::cout << "Coprime of " << root << " is " << cop << std::endl;
		
		int cnt = 0;
		// change all non-coprimes to the selected coprime - 'cop'
		for (int i = 0; i < n; ++i)
		{
			// do not change the root itself
			if (i == root) continue;
			
			if (!coprimes[arr[root]][arr[i]])
			{
				arr[i] = cop;
				++cnt;
			}
		}
		
		std::cout << cnt << '\n';
		for (int i = 0; i < n; ++i)
		{
			std::cout << arr[i] << (i == n-1 ? '\n' : ' ');
		}
	}
	
	return 0;
}
