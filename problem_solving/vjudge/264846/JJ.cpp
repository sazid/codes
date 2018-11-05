#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	// first - factor
	// second - power
	map<int,int> factors;
	
	int x;
	while (cin >> x and x != 0)
	{
		int n = x >= 0 ? x : (-1)*x;
		factors.clear();
		
		for (int i = 2; i*i <= n; ++i)
		{
			while (n % i == 0)
			{
				++factors[i];
				n /= i;
			}
		}
		
		// if n is a prime number, then the above loop won't reduce
		// the number to 1, in that case mark it as a factor of itself
		if (n > 1) ++factors[n];
		
		int power;
		for (power = 32; power >= 1; --power)
		{
			bool found = true;
			for (auto it : factors)
			{
				if (it.second % power != 0)
				{
					found = false;
					break;
				}
			}
			
			if (x >= 0 and found) break;
			else if (x < 0 and found and power % 2 == 1) break;
		}
		
		cout << power << '\n';
	}
	
	return 0;
}
