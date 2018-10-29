#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, c, f, t, cf, ct, ft, cft;
	cin>>n>>c>>f>>t>>cf>>ct>>ft>>cft;
	
	cout << n - (c + f + t - cf - ft - ct + cft) << endl;
	
	return 0;
}
