#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	double n[3];

	std::cin >> n[0] >> n[1] >> n[2];
	std::sort(n, n + 3);

	int t = 0;

	while (true)
	{
		double a = n[0], b = n[1], c = n[2];
		if (a + b > c and b + c > a and c + a > b) break;

		++n[0];
		std::sort(n, n + 3);
		++t;
	}

	std::cout << t << '\n';

	return 0;
}