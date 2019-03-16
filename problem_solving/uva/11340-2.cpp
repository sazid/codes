#include <bits/stdc++.h>
using namespace std;

long long n, k, m, x, cost[256];
char c;
string s;

int main() {
	cin>>n;
	while(n--) {
		memset(cost, 0, sizeof(cost));
		cin>>k;
		while(k--) {
			cin>>c;
			cin>>cost[c]; 
		}

		cin>>m;
		double total = 0.0;
		cin.ignore();
		while(m--) {
			getline(cin, s);
			for (char &c: s)
				total += cost[c];
		}
		printf("%0.2lf$\n", total/100.0);
	}

	return 0;
}

