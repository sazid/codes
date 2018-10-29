#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int Case;
	cin >> Case;
	while (Case--)
	{
		int n;
		cin >> n;
		
		if (n == 1)
		{
			cout << "1\n";
			continue;
		}
		
		int nums[10] = {0, 1}, i, j;
		
		for (i = 9; n > 1 and i > 1; --i)
		{
			while ( n % i == 0 )
			{
				++nums[i];
				n /= i;
			}
		}
		
		if (n != 1) 
		{
			cout << "-1\n";
			continue;
		}
		
		for (i = 2; i < 10; ++i) 
			for (j = 0; j < nums[i]; ++j)
				cout << i;
		
		cout << '\n';
	}
	
	return 0;
}
