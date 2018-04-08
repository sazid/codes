#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int h, m;
	double ang=0;
	string s;
	cout.precision(3);
	while (cin >> s && s != "0:00") {
		int i = s.find(":");
		h = atoi(s.substr(0, i).c_str());
		m = atoi(s.substr(i+1, s.size()-1).c_str());

		ang = abs(abs((h*30.0)-(m*6.0))-(5*6*m/60.0));
		if (360-ang < ang) ang = 360-ang;
		// while (ang > 180) ang -= 180;
		cout << fixed << ang << "\n";
	}

	return 0;
}

