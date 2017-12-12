#include <bits/stdc++.h>
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n;
	double v, t;

	scanf("%d", &n);

	loop(n)
	{
		cin >> v >> t;
		printf("%0.2lf\n", -v / t);
	}

	return 0;
}
