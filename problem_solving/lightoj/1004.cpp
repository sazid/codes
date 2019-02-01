#include <bits/stdc++.h>
using namespace std;

int grid[105][105];
int N;

int main() {
	freopen("in.txt", "r", stdin);
	
	int T;
	scanf("%d", &T);
	
	for (int cs = 1; cs <= T; ++cs) {
		scanf("%d", &N);
		
		for (int row = 0; row <= (2*N)-1; ++row) {
			for (int col = 0; col < N - abs(row - N + 1); ++col) {
				scanf("%d", &grid[row][col]);
			}
		}
		
		
		
		printf("Case %d: %d\n", cs, 0);
	}
	
	return 0;
}

/*
2
4
7
6 4
2 5 10
9 8 12 2
2 12 7
8 2
10
2
1
2 3
1
*/
