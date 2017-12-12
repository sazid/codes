#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n, k, k_val, nums = 0;
	cin >> n >> k;
	int a[n];
	f(n)
	{
		cin >> a[i];
		if (k == (i + 1)) k_val = a[i];
	}

	f(n)
	{
		if (a[i] >= k_val && a[i] != 0) nums++;
	}

	cout << nums << endl;

	return 0;
}
