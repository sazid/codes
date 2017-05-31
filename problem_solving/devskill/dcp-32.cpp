#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n;
	int x1, y1, x2, y2;
	cin >> n;
	f(n)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		cout << "Case " << i + 1 << ": " << abs(x2 - x1) + abs(y2 - y1) << endl;
	}

	return 0;
}
