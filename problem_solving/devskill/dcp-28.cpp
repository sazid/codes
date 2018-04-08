#include <bits/stdc++.h>
#define loop(n, i) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	double r, a;
	double result;
	
	cin >> n;
	loop(n, i)
	{
		cin >> r >> a;
		if ((4*r*r) <= 2*a*a) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}
