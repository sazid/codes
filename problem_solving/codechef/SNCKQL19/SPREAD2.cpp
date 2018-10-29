#include <bits/stdc++.h>

typedef long long ll;

ll arr[100005];

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	ll T, N, days;
	std::cin >> T;

	while (T--)
	{
		// std::memset(arr, 0, sizeof(arr));

		days = 0;
		
		std::cin >> N;

		for (ll i = 0; i < N; ++i)
		{
			std::cin >> arr[i];
			if (i > 0) arr[i] += arr[i-1];
		}

		for (ll i = 0; i < N-1; ++days)
		{
			if (i < 100005) i += arr[i];
		}

		if (days == 0) ++days;
		std::cout << days << '\n';
	}

	return 0;
}
