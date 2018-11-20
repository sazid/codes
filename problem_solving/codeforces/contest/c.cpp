#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll arr[200005];
bitset<1000005> m;
//~ ll sum[200005];

//~ map<ll, vector<int>> m;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	vector<ll> vec;
	
	cin >> n;
	
	ll s = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
		s += arr[i];
		m[arr[i]] = 1;
	}
	
	//~ for (int i = 1; i <= n; ++i) sum[i] = s - arr[i];
	
	for (int i = 1; i <= n; ++i) {
		
		ll t = s - arr[i];
		
		if (m[t/2]) vec.push_back(i);
		
	}
	
	cout << vec.size() << '\n';
	for (ll i : vec) cout << i << ' ';
	
	return 0;
}
