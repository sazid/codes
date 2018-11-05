#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	
	while (t--)
	{
		int n;
		cin >> n;
		int men[n + 1], women[n + 1];
		
		for (int i = 0; i < n; ++i) cin >> men[i];
		for (int i = 0; i < n; ++i) cin >> women[i];
		
		sort(men, men+n);
		sort(women, women+n);
		
		int s = 0;
		for (int i = 0; i < n; ++i) s += (men[i]*women[i]);
		
		cout << s << '\n';
	}
	
	return 0;
}
