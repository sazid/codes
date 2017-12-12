#include <bits/stdc++.h>
#define f(n) for (int i = 0; i < n; i++)

using namespace std;

int main()
{
	string n;

	bool start = true;
	while (getline(cin, n))
	{
		f(n.length())
		{
			if (n[i] == '"' && start)
			{
				n.erase(i, 1);
				n.insert(i, 2, '`');
				start = !start;
			}
			else if (n[i] == '"' && !start)
			{
				n.erase(i, 1);
				n.insert(i, 2, '\'');
				start = !start;
			}
		}
		cout << n << endl;
	}

	return 0;
}
