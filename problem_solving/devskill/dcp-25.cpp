#include <bits/stdc++.h>
#define loop(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n, l;
	string input, rev, inp;

	cin >> n;
	loop(n)
	{
		cin >> input;
		rev = "";
		inp = "";
		for (int k = 0; k < input.size(); k++) inp += (char)tolower(input[k]);
		for (int k = input.size()-1; k >= 0; k--) rev += (char)tolower(input[k]);

		if (inp == rev)
			cout << "Yes\n";
		else
			cout << "No\n";
	}

	return 0;
}
