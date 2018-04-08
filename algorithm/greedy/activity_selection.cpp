/*
 * Input: A set of Activities, S = {a1, ..., an}
 * Each activity has a start and a finish time, ai = (si, fi)
 * Two activities are compatible if and only if their time does not overlap
 * Output: A maximum size subset of mutually compatible activities
 */

#include <iostream>
#include <algorithm>
using namespace std;

void sort_time(int *arr1, int *arr2, int n) {
	pair<int, int> p[n];

	for (int i = 0; i < n; i++) {
		p[i].first = arr1[i];
		p[i].second = arr2[i];
	}

	sort(p, p+n);

	for (int i = 0; i < n; i++) {
		arr1[i] = p[i].first;
		arr2[i] = p[i].second;
	}
}

int* select_activities(int *s, int *f, int *o, int n) {
	int i = 1, c = 2;
	o[1] = 1;

	for (int m = 2; m < n; m++) {
		if (s[m] >= f[i]) {
			o[c++] = m;
			i = m;
		}
	}

	return o;
}

int main() {
	int s[] = {0, 8, 11, 9, 7, 2};
	int f[] = {0, 10, 12, 11, 9, 14};
	// sort by finish time first and then start time
	sort_time(f, s, 6);

	int *o = new int[6];
	o = select_activities(s, f, o, 6);
	for (int i = 1; i < 6; i++) {
		if (o[i]) cout << o[i] << endl;
		else break;
	}
	
	delete[] o;
	return 0;
}

