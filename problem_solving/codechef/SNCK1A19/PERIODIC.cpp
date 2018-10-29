#include <bits/stdc++.h>

int N, step;
int arr[100005];

int f(int i, int prev, int period)
{
	//~ if (i+1 >= N and arr[i] == 1) return period;
	if (i+1 >= N) return N;
	
	if (arr[i+1] == 1) return period + 1;
	else if ((arr[i+1] == prev + step) or (arr[i+1] == -1))
	{
		return f(i+1, prev + step, period + 1);
	}
	else
	{
		return -1;
	}
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	
	int T;
	std::cin >> T;
	
	while (T--)
	{
		std::cin >> N;
		
		for (int i = 0; i < N; ++i) std::cin >> arr[i];
		int p = -1;
		for (int i = 1; i <= N; ++i)
		{
			step = i;
			p = f(0, arr[0], 0);
			
			if (p == N)
			{
				std::cout << "inf\n";
				break;
			}
			else if (p == -1)
			{
				std::cout << "impossible\n";
				break;
			}
			else
			{
				std::cout << p << '\n';
				break;
			}
		}
	}
	
	return 0;
}
