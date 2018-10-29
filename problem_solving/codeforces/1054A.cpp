
#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int x, y, z, t1, t2, t3;
	cin >> x >> y >> z >> t1 >> t2 >> t3;
	
	int e_dist = abs(x-z)*t2 + t3 + t3 + abs(x-y)*t2 + t3;
	int stair_dist = abs(x - y) * t1;
	
	//~ cout << e_dist << ' ' << stair_dist << endl;
	if (e_dist <= stair_dist) cout << "YES\n";
	else cout << "NO\n";
	
	return 0;
}
