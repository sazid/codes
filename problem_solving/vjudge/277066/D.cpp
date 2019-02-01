#include <bits/stdc++.h>
using namespace std;

bool bs(vector<int> &v, int key) {
	int l = 0, r = v.size()-1, mid;
	
	while (l <= r) {
		mid = l + (r - l)/2;
		
		if (v[mid] == key) return true;
		else if (v[mid] < key) l = mid+1;
		else r = mid-1;
	}
	
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	
	while (cin >> n) {
		vector<int> vec(n);
		
		for (int &x: vec) cin >> x;
		
		int make;
		cin >> make;
		
		sort(vec.begin(), vec.end());
		
		vector<pair<int, int>> vp;
		for (int x: vec)
			if (bs(vec, make-x))
				vp.emplace_back(x, make-x);
		
		pair<int, int> shortest = vp[0];
		for (auto p: vp) {
			if (abs(p.first-p.second) < abs(shortest.first - shortest.second))
				shortest = p;
		}
		
		cout << "Peter should buy books whose prices are " << shortest.first << " and " << shortest.second << ".\n\n";
	}
	
	return 0;
}
