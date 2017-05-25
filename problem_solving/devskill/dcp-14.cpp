#include <bits/stdc++.h>
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n;
	double ab, bc, cd, ad;

	cin >> n;

	loop(n)
	{
		cin >> ab >> bc >> cd;
		ad = sqrt( pow(ab, 2) + pow(bc, 2) + pow(cd, 2) );
		printf("%0.2lf\n", ad);
	}
	
	return 0;
}
