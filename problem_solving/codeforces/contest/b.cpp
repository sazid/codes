#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	
	if (s.size() <= 20) {
		cout << 1 << ' ' << s.size() << '\n' << s << endl;
		return 0;
	}
	
	int rows, cols;
	int total;
	for (rows = 2; rows <= 5; ++rows) {
		
		for (cols = 1; cols <= 20; ++cols) {
			total = cols * rows;
			
			if ((int)s.size() <= total) {
				int rem = total - s.size();
				int t = rows;
				cout << rows << ' ' << cols << '\n';
				
				int p = 0;
				for (int i = 0; i < rows; ++i) {
					int stars_per_row = ceil(double(rem) / (double)t);
					rem -= stars_per_row;
					--t;
					
					for (int j = 0; j < cols - stars_per_row; ++j) {
						cout << s[p++];
					}
					
					for (int kk = 0; kk < stars_per_row; ++kk) {
						cout << '*';
					}
					
					cout << '\n';
				}
				
				return 0;
			}
		}
		
	}
	
	return 0;
}

//~ MyNameIsLifeIAmForeverByYourSideMyNameIsLife
