#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string x;
	cin >> n;
	while (n--)
	{
		cin >> x;
		int l = x.length();
		if (l > 10)
			cout << x[0] << l - 2 << x[l - 1] << endl;
		else
			cout << x << endl;
	}

	return 0;
}
