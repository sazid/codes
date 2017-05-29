/**
 * WARNING
 * UNSOLVED
 */

#include <bits/stdc++.h>
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n;
	double r, a;
	double result;
	
	cin >> n;
	loop(n)
	{
		cin >> r >> a;
		result = round((sqrt(2) * a) * 100.0) / 100.0;
		cout << "a: " << a << endl << "r: " << r << endl;
		cout << "diameter: " << r*2 << endl;
		cout << result << endl;
		if (result == r * 2)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}
