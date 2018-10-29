#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int cs = 1; cs <= T; cs++) {
		vector<string> back;
		vector<string> forward;
		string current = "http://www.lightoj.com/";
		string s;
		cout << "Case " << cs << ": \n";

		while (true)
		{
			cin >> s;
			if (s == "QUIT")
				break;
			else if (s == "VISIT")
			{
				forward.clear();
				back.push_back(current);
				cin >> current;
				cout << current << '\n';
			}
			else if (s == "BACK")
			{
				if (back.empty())
				{
					cout << "Ignored\n";
				}
				else
				{
					forward.push_back(current);
					current = back.back();
					back.pop_back();
					cout << current << '\n';
				}
			}
			else if (s == "FORWARD")
			{
				if (forward.empty())
				{
					cout << "Ignored\n";
				}
				else
				{
					back.push_back(current);
					current = forward.back();
					forward.pop_back();
					cout << current << '\n';
				}
			}
		}
	}

	return 0;
}

