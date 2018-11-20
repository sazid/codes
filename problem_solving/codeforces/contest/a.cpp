#include <bits/stdc++.h>
using namespace std;

int arr[105];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k, x;
	cin >> n >> k;

	int mx_count = 0;
	int type_of_utensils = 0;
	
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (arr[x] == 0) ++type_of_utensils;
		++arr[x];
		mx_count = max(mx_count, arr[x]);
	}

	int y = ceil(double(mx_count)/double(k));
	
	cout << type_of_utensils * k * y - n << endl;
	
	return 0;
}
