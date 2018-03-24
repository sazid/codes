#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef unsigned long long ull;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
	ull n, t, x, mx=0;
	vector<ull> v;
	cin >> n >> t;
	v.reserve(n);
	while(n--)
	{
		cin >> x;
		v.push_back(x);
	}

	n = v.size();
    for (x=1; x<n; x++) {
		v[x] += v[x-1];
    }

    for (x=0; x<n; x++) {
		auto lb = lower_bound(v.begin()+x, v.end(), t);
		ull diff = lb-v.begin();
    }

    cout << mx;

	return 0;
}
