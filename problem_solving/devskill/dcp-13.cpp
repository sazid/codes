#include <bits/stdc++.h>
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n;
	int bd1, bd2, pak1, pak2;
	bool match1, match2;

	cin >> n;

	loop(n)
	{
		cin >> bd1 >> bd2 >> pak1 >> pak2;
		match1 = (bd1 + bd2) - (pak1 + pak2) > 0 ? true : false;
		
		cin >> bd1 >> bd2 >> pak1 >> pak2;
		match2 = (bd1 + bd2) - (pak1 + pak2) > 0 ? true : false;

		if (match1 && match2)
			cout << "Banglawash\n";
		else
			cout << "Miss\n";
	}
	
	return 0;
}
