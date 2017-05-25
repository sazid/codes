#include <bits/stdc++.h>
#include <string.h>
#define loop(n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
	int n;
	string input;

	cin >> n;
	getchar();
	loop(n)
	{
		getline(cin, input, '\n');
		reverse(input.begin(), input.end());
		cout << input << endl;
	}

	return 0;
}
