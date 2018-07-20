#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, i=0, j=1, min=INT_MAX;
	cin >> n;
	int arr[n+5];
	for (int k = 0; k < n; k++) cin >> arr[k];
	for (int k = 0; k < n; k++) {
		if (arr[j]-arr[i] < min) {
			min = arr[j]-arr[i];
		}
		i++;
		j = (j+1) % n;
	}
	cout << i << " " << j << endl;
	return 0;
}

