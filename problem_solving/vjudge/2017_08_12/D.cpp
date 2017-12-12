#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool leap(ll y) {
	if (y % 400 == 0) return true;
	else if (y % 100 != 0 && y % 4 == 0) return true;
	else return false;
}

int pos(string m) {
	if (m == "January") return 0;
	else if (m == "February") return 1;
	else return 2;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, i=1;
	string m1, m2;
	ll d1, d2, y1, y2;
	cin >> n;
	while (n--) {
		cin >> m1 >> d1;
		cin.ignore();
		cin >> y1;

		cin >> m2 >> d2;
		cin.ignore();
		cin >> y2;

		int days = (y2/4 - y2/100 + y2/400) - (y1/4 - y1/100 + y1/400);
		if (leap(y1) && pos(m1) < 2) days++;
		if (leap(y2) && ((m2 == "February" && d2 < 29) || (m2 == "January"))) days--;

		cout << "Case " << i << ": " << days << endl;
		i++;
	} 

	return 0;
}