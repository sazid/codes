#include <bits/stdc++.h>
using namespace std;

void mini(int &a, int b) {
	a = min(a, b);
}

int costs[25][3];
int n;

const int INF = INT_MAX;

// given a position pos and the currently selected color
// it'll return the minimum cost for coloring so far
int F(int pos, short color, int sum) {
	if (pos >= n) return sum;
	
	//~ int _min = INF;
	//~ for (int i = 0; i <= 2; ++i)
		//~ if (i != color)
			//~ mini(_min, F(pos + 1, i, sum + costs[pos][i]));

	int mn = INF;
	if (color == -1) {
		mini(mn, colors[pos][0]);
		mini(mn, colors[pos][1]);
		mini(mn, colors[pos][2]);
	} else if (color == 0) {
		mini(mn, colors[pos][1]);
		mini(mn, colors[pos][2]);
	} else if (color == 1) {
		mini(mn, colors[pos][0]);
		mini(mn, colors[pos][2]);
	} else {
		mini(mn, colors[pos][1]);
		mini(mn, colors[pos][0]);
	}
	
	
	
	return _min;
}

int main() {
	int T;
	scanf("%d", &T);
	
	for (int cs = 1; cs <= T; ++cs) {
		scanf("%d", &n);
		
		for (int i = 0; i < n; ++i)
			scanf("%d %d %d", &costs[i][0], &costs[i][1], &costs[i][2]);
		
		printf("Case %d: %d\n", cs, F(0, -1, 0));
	}
	
	return 0;
}

/*
2

4
13 23 12
77 36 64
44 89 76
31 78 45
 
3
26 40 83
49 60 57
13 89 99
*/
