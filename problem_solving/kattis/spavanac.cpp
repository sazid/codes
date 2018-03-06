// https://open.kattis.com/problems/spavanac
#include <bits/stdc++.h>
using namespace std;

int main() {
	int h, m, total;
	cin >> h >> m;
	total = h*60 + m;
	if (total-45 < 0) total = 1440+(total-45);
	else total -= 45;
	cout << total/60 << " " << total%60 << endl;
	return 0;
}

