#include <bits/stdc++.h>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	std::string s;

	std::cin >> n >> s;

	std::sort(s.begin(), s.end());

	std::cout << s << std::endl;

	return 0;
}