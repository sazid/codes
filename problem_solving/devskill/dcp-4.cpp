#include <bits/stdc++.h>

using namespace std;

int main()
{
	double ct, sum;
	int n, p, r;

	while(scanf("%lf %d", &ct, &n) != EOF)
	{
		sum = 0.0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &p);
			sum += p;
		}

		r = ceil(ct / sum);
		if (r == 1.0)
			cout << "Project will finish within 1 day.\n";
		else
			cout << "Project will finish within " << r << " days.\n";
	}

	return 0;
}
