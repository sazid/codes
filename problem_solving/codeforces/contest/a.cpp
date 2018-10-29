#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int arr[105];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k = 0, sum=0;
	cin>>n;
	
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		sum += arr[i];
		k = max(k, arr[i]);
	}
	
	while (true) {
		
		int temp = 0;
		for (int i = 0; i < n; ++i) {
			temp += (k - arr[i]);
		}
		
		if (temp > sum) {
			break;
		}
		++k;
		
	}
	
	cout << k << endl;
	
	return 0;
}
