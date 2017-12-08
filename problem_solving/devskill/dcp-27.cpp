#include <bits/stdc++.h>
#include <string.h>
#define loop(n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n;
	bool is_prime;
	int x;
	
	cin >> n;
	loop(n)
	{
		is_prime = true;
		cin >> x;
		if (x == 1 || x == 0)
		{
			cout << "No\n";
			continue;
		}

		for (int j = 2; j <= sqrt(x); j++)
		{
			if (x % j == 0)
			{
				is_prime = false;
				break;
			}
		}

		if (is_prime)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}
