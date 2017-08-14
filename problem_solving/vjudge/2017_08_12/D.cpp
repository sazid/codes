#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int sum_month[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

bool leap(ll y) {
	if (y % 400 == 0) return true;
	else if (y % 100 != 0 && y % 4 == 0) return true;
	else return false;
}

int pos(string m) {
	if (m == "January") return 0;
	else if (m == "February") return 1;
	else if (m == "March") return 2;
	else if (m == "April") return 3;
	else if (m == "May") return 4;
	else if (m == "June") return 5;
	else if (m == "July") return 6;
	else if (m == "August") return 7;
	else if (m == "September") return 8;
	else if (m == "October") return 9;
	else if (m == "November") return 10;
	else if (m == "December") return 11;
}

int days_leap(string m1, ll d1, ll y1, string m2, ll d2, ll y2) {
	if (y1 == y2) {
		if (leap(y1) && m2 == "February" && d2 == 29) return 1;
		if (leap(y1) && m1 == "January" && m2 != "February") return 1;
		return 0;
	}

	int days = 0;
	int days_no_leap = 0;
	int y = y1;
	string m = m1;
	int d = d1;

	while (y <= y2) {
		if (y == y1)
		{ // 2012 == 2012
			int p1 = pos(m);
			days += sum_month[11] - sum_month[p1];
			days_no_leap += days;
			days += month_days[p1]-d;
			days_no_leap += month_days[p1]-d;

			if (leap(y) && p1 < 2) {
				days++;
			}
			m = "January";
			d = 1;
		}
		else if (y > y1 && y < y2)
		{ // 2013 > 2012 and 2013 < 2015
			if (leap(y)) {
				days += 366;
			} else {
				days += 365;
			}
			days_no_leap += 365;

			m = "January";
			d = 1;
		}
		else if (y == y2)
		{ // 2015 == 2015
			int p2 = pos(m2);
			for (int i = 0; i < p2; i++) {
				days += month_days[i];
				days_no_leap += month_days[i];
			}

			if (leap(y2) && m2 == "February" && d2 == 29) {
				days++;
			}
			else if (leap(y2) && p2 > 0 && m2 != "February") {
				days++;
			}

			days_no_leap += d2;
			days += d2;
		}

		y++;
	}
	return days - days_no_leap;
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

		cout << "Case " << i << ": " << days_leap(m1, d1, y1, m2, d2, y2) << endl;
		i++;
	} 

	return 0;
}