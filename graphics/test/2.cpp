#include <iostream>
using namespace std;

int main() {
	/*
	int h1, h2, m1, m2;
	char c;
	cin >> h1 >> c >> m1 >> h2 >> c >> m2;

	if (h1 < h2) {
		swap(h1, h2);
		swap(m1, m2);
	}

	if (h1-h2 < 10) cout << 0;
	cout << h1 + (h1 - h2) << ':';
	
	if (abs(m1-m2)/2 < 10) cout << 0;
	cout << abs(m1-m2)/2 << endl;
	*/

	int h1, h2, h3, m1, m2, m3;
	char c;
	cin >> h1 >> c >> m1 >> h2 >> c >> m2;

	int t = ( (abs(h1 - h2)*60) + (abs(m1 - m2)) ) >> 1;

	int ho = (h1 + t/60);
	int mi = (m1 + t)%60;
	if (ho < 10) cout << 0;
	cout << ho << ':';
	if (mi < 10) cout << 0;
	cout << mi << endl;
	return 0;
}

