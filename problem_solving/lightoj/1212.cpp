#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);

	nt T;
	cin >> T;
	for (int cs = 1; cs <= T; cs++)
	{
		cout << "Case " << cs << ":"<<endl;

		string s;
		int n, m, d;
		cin >> n >> m;

		deque<int> dq;

		for (int i = 0; i < m; i++)
		{
			cin >> s >> d;
			if (s == "pushLeft")
			{
				if (dq.size() == n)
					cout << "The queue is full"<<endl;
				else
				{
					dq.push_front(d);
					cout << "Pushed in left: " << d << endl;
				}
			}
			else if (s == "pushRight")
			{
				if (dq.size() == n)
					cout << "The queue is full"<<endl;
				else
				{
					dq.push_back(d);
					cout << "Pushed in right: " << d << endl;
				}
			}
			else if (s == "popLeft")
			{
				if (dq.empty())
					cout << "The queue is empty"<<endl;
				else
				{
					cout << "Poppped from left: " << dq.front() << endl;
					dq.pop_front();
				}
			}
			else if (s == "popRight")
			{
				if (dq.empty())
					cout << "The queue is empty"<<endl;
				else
				{
					cout << "Poppped from right: " << dq.back() << endl;
					dq.pop_back();
				}
			}
		}

	}

	return 0;
}

