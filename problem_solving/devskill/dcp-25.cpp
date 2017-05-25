#include <bits/stdc++.h>
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n, l;
	string input, rev;

	cin >> n;
	loop(n)
	{
		cin >> input;
		rev = input;
		reverse(rev.begin(), rev.end());

		if (input == rev)
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	return 0;
}
