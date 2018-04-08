#include <bits/stdc++.h>
#define loop(n) for (int i = 0; i < n; i++)
#define loop1(n) for (int i = 1; i <= n; i++)

using namespace std;

int main()
{
	int n, cx, cy, px, py;
	double r, result;

	cin >> n;
	loop1(n)
	{
		cin >> cx >> cy >> r >> px >> py;
		result = sqrt( pow(px-cx, 2) + pow(py-cy, 2) );
		if (result > r)
			cout << "Case " << i << ": Outside\n";
		else if (result < r)
			cout << "Case " << i << ": Inside\n";
		else
			cout << "Case " << i << ": OnCircle\n";
	}

	return 0;
}
