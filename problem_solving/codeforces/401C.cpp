#include <bits/stdc++.h>
using namespace std;

short arr[(int)10e6+5];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	string s;

	cin >> n >> m;

	if (n-1 <= m and (m <= 2 * (n + 1)))
	{
		if (n-1 == m)
		{
			cout << 0;
			for(size_t i = 0; i < m; ++i)
			{
				cout << 10;
			}
		}
		else if (n == m)
		{
			for (int i = 0; i < n; ++i)
			{
				cout << 10;
			}
		}
		else
		{
			const int sz = 2 * n + 1;
			memset(arr, 0, sizeof(arr));

			for (int i = 0; i < sz; ++i)
			{
				if (i % 2 == 0 and m > 0)
				{
					++arr[i];
					--m;
				}
			}

			for (int i = 0; i < sz; ++i)
			{
				if (i % 2 == 0 and m > 0)
				{
					++arr[i];
					--m;
				}
			}

			for (int i = 0; i < sz; ++i)
			{
				if (i % 2 == 0)
				{
					if (arr[i] == 1) cout << 1;
					if (arr[i] == 2) cout << 11;
				}
				else
				{
					cout << 0;
				}
			}
		}
	}
	else
	{
		cout << -1;
	}

	return 0;
}
